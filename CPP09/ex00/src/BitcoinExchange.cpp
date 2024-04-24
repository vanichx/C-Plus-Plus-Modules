/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:34:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/24 17:38:04 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

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
			throw std::invalid_argument("Something went wrong... Coudnt open file");
	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
}

//////////////////////////////  TO DO ///////////////////////////////////////////////

void BitcoinExchange::parseDataInFile(std::ifstream & myFileStream) {
	std::string myString;
	std::string line;
	std::string day, month, year, weekday, space;
	char separator = '-';
	(void)separator;
	if (myFileStream)
		std::getline(myFileStream, myString);
	myString = removeWhitespace(myString);
	if (myString != "date|value")
		throw std::runtime_error("Error: Invalid header of the input file");
	while (myFileStream.good()) {
		std::getline(myFileStream, myString);
		std::cout << myString << std::endl;
	}
}

//////////////////////////////  TO DO ///////////////////////////////////////////////

std::string	BitcoinExchange::removeWhitespace(const std::string& str) {
	std::string trimmed;
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (!std::isspace(static_cast<unsigned char>(*it))) {
			trimmed += *it;
		}
	}
	return (trimmed);
}


BitcoinExchange::BitcoinExchange() {
	// std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string filename) {
	// std::cout << "Filename constructor called" << std::endl;
	try {
		if (parseFileName(filename) == 0)
			parseFile(filename);
		else
			throw std::invalid_argument("Wrong file extension, should be .txt");
	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	std::cout << "Assigment operator called" << std::endl;
	if (this != &other) {
		_mapContainer = other._mapContainer;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {
	// std::cout << "Destructor called" << std::endl;
	_mapContainer.clear();
}