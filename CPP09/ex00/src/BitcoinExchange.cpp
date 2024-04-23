/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:34:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/23 16:55:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string filename) {
	std::cout << "Filename constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	std::cout << "Copy constructor called" << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	std::cout << "Assigment operator called" << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "Destructor called" << std::endl;
}