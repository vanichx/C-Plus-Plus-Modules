/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:38:22 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/30 12:20:53 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int main(int argc, char **argv)
{
	try {
		if (argc == 2)
			RPN launch_program(argv[1]);
		else
			throw std::invalid_argument("Usage ./RPN \"a b + c - d - e + f +\"");
	}
	catch (const std::exception & ex) {
		std::cerr << "Error: " << ex.what() << std::endl;
		return 1;
	}
	return 0;
}