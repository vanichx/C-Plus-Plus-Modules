/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:34:51 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/25 20:22:05 by ivanpetruni      ###   ########.fr       */
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
// Need to fix the case when there is no data at all;

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