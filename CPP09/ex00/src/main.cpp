/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:34:51 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/24 16:39:47 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try {
		if (argc == 2)
			BitcoinExchange btc(argv[1]);
		else
			throw std::invalid_argument("Usage: ./btc input_file_name.txt");
	}
	catch (const std::exception & ex) {
		std::cerr << "Error: " << ex.what() << std::endl;
		return (1);
	}
	return (0);
}