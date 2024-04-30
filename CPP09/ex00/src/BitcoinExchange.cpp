/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:34:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/30 11:54:33 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

std::string	BitcoinExchange::removeWhitespace(const std::string& str) {
	std::string trimmed;
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (!std::isspace(static_cast<unsigned char>(*it))) {
			trimmed += *it;
		}
	}
	return (trimmed);
}

int BitcoinExchange::parseFileName(const std::string filename) {
	std::string	txt = "txt";
	size_t		findLastDot = filename.find_last_of('.');
	if (findLastDot == std::string::npos)
		return (1);
	std::string fileExtension = filename.substr(findLastDot + 1);
	if (fileExtension == txt)
		return (0);
	else
		return (1);
}

void BitcoinExchange::parseFile(const std::string filename) {
	std::ifstream myFileStream;
	try {
		myFileStream.open(filename);
		if (myFileStream.is_open())
			parseDataInFile(myFileStream);
		else 
			throw std::invalid_argument("Something went wrong... Coudnt open input file");
	}
	catch (std::exception & ex) {
		myFileStream.close();
		std::cout << ex.what() << std::endl;
	}
}

void BitcoinExchange::finalOutput(int yyyy, int mm, int dd, double rate, std::string date) {
	
	bool isLeapYear = (yyyy % 4 == 0 && (yyyy % 100 != 0 || yyyy % 400 == 0));
	int daysInMonth[] = {31, 28 + isLeapYear, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	std::ostringstream oss;
	
	if (yyyy < 1900 || yyyy > 2024 || mm < 1 || mm > 12 || dd < 1 || dd > daysInMonth[mm - 1])
		oss << "Error: bad input => " << yyyy << "-" << mm << "-" << dd;
	else if (rate == -404)
		oss << "Error: bad input => " << yyyy << "-" << mm << "-" << dd;
	else if (rate < 0)
		oss << "Error: not a positive number.";
	else if (rate > 1000)
		oss << "Error: too large a number.";
	else {
		
		std::map<std::string, double>::iterator key = _mapContainer.find(date);
		
		if (key == _mapContainer.end()) {
			std::map<std::string, double>::iterator lower = _mapContainer.lower_bound(date);
			if (lower != _mapContainer.begin()) {
				--lower;
				key = lower;
			}
		}
		if (key == _mapContainer.end()) {
			oss << "Error: No rate found for date " << date;
		} else {
			double result = key->second * rate;
			oss << yyyy << "-" << std::setw(2) << std::setfill('0') << mm << "-" << std::setw(2) << std::setfill('0') << dd << " => " << rate << " = " << result;
		}
	}
	std::cout << oss.str() << std::endl;

}


void BitcoinExchange::parseDataInFile(std::ifstream & myFileStream) {
	
	std::string myString;
	if (myFileStream)
		std::getline(myFileStream, myString);
	myString = removeWhitespace(myString);
	if (myString != "date|value")
		throw std::runtime_error("Error: Invalid header of the input file");
	while (std::getline(myFileStream, myString)) {
		int yyyy = 0, mm = 0, dd = 0;
		double rate = 0.0;
		std::stringstream y, m, d, srate;
		std::string date = myString.substr(0, 4) + myString.substr(5, 2) + myString.substr(8, 2);
		y << myString.substr(0, 4); // First param starting pos and second how much to substruct
		m << myString.substr(5, 2);
		d << myString.substr(8, 2);
		
		y >> yyyy;
		m >> mm;
		d >> dd;
		if (myString.length() > 13) {
			srate << myString.substr(13);
			if (!(srate >> rate))
				throw std::runtime_error("Error: Invalid rate format in the input file");
		} else
			rate = -404;
		finalOutput(yyyy, mm, dd, rate, date);
	}
}

void BitcoinExchange::parseCsvFile(std::string myDbFileName) {
	std::ifstream myDbFileStream(myDbFileName);
	if (!myDbFileStream) {
		myDbFileStream.close();
		throw std::runtime_error("Error: empty csv file");
	}
	std::string myString;
	if (myDbFileStream)
		std::getline(myDbFileStream, myString);
	myString = removeWhitespace(myString);
	if (myString != "date,exchange_rate") {
		myDbFileStream.close();	
		throw std::runtime_error("Error: Invalid header of the Data Base input file");
	}
	while (std::getline(myDbFileStream, myString)) {
		
		size_t comma_pos = myString.find(',');
		
		if (comma_pos != 10) {
			myDbFileStream.close();	
			throw std::runtime_error("Error: invalid reading of data.csv");
		} else if (comma_pos != std::string::npos && comma_pos < myString.length() - 1) {
			std::string date = myString.substr(0,comma_pos).erase(4,1).erase(6,1);
			std::stringstream convert;
			double valueAtDate = 0.0;
			
			convert << myString.substr(comma_pos + 1);
			convert >> valueAtDate;
			if (convert.fail() || !convert.eof()) {
				myDbFileStream.close();
				throw std::runtime_error("Error: invalid value format");
			}

			_mapContainer.insert(std::make_pair(date, valueAtDate));
		} else {
			myDbFileStream.close();
			throw std::runtime_error("Error: invalid reading of data.csv");
		}
	}
}

BitcoinExchange::BitcoinExchange() {
	// std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string filename) {
	// std::cout << "Filename constructor called" << std::endl;
	try {
		if (parseFileName(filename) == 0) {
			parseCsvFile("data.csv");
			parseFile(filename);
		}
		else
			throw std::invalid_argument("Wrong file extension, should be .txt");
	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	// std::cout << "Assigment operator called" << std::endl;
	if (this != &other) {
		_mapContainer = other._mapContainer;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {
	// std::cout << "Destructor called" << std::endl;
	_mapContainer.clear();
}