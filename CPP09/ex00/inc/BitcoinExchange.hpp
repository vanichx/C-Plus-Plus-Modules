/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:33:42 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/23 16:53:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
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
	private:
		BitcoinExchange(const BitcoinExchange & other);
		BitcoinExchange &operator=(const BitcoinExchange & other);
	// Destructor
	public:
		~BitcoinExchange();
	// Methods
	public:
};



#endif
