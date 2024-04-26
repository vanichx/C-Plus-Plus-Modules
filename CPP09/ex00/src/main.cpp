/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:34:51 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/26 14:24:34 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

void PrintMapContainer(std::map<std::string, double> mapContainer)
{
	for(std::map<std::string, double>::iterator it = mapContainer.begin(); it != mapContainer.end(); it++)
	{
		std::cout << it->first << " and " << it->second << std::endl;
	}
}

// Need to check for a proper closing of filestream in case of failure


int main(int argc, char **argv)
{
	try {
		if (argc == 2) {
			BitcoinExchange btc(argv[1]);
			// PrintMapContainer(btc._mapContainer);
		}
		else
			throw std::invalid_argument("Usage: ./btc input_file_name.txt");
	}
	catch (const std::exception & ex) {
		std::cerr << "Error: " << ex.what() << std::endl;
		return (1);
	}
	return (0);
}