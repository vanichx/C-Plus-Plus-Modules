/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:33:42 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/25 19:36:02 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
#include <exception>


class BitcoinExchange 
{
	// Private attributes
	public:
		std::map<std::string, double> _mapContainer;
	// Constructors
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string filename);
	// Private constructors
	private:
		BitcoinExchange(const BitcoinExchange & other);
		BitcoinExchange &operator=(const BitcoinExchange & other);
	// Destructor
	public:
		~BitcoinExchange();
	// Methods
	public:
		int  parseFileName(const std::string filename);
		void parseFile(const std::string filename);
		void parseDataInFile(std::ifstream & myFileStream);
		void finalOutput(int yyyy, int mm, int dd, double rate, std::string date);
		void parseCsvFile(std::string myDbFileName);
		std::string	removeWhitespace(const std::string & str);
		
};



#endif
