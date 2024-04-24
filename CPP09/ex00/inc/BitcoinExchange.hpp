/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:33:42 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/24 17:18:43 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <exception>


class BitcoinExchange 
{
	// Private attributes
	private:
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
		std::string	removeWhitespace(const std::string & str);
		
};



#endif
