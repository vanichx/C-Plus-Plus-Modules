/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:09:51 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/05 16:38:14 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	
	if (argc == 2 && argv[1] != NULL) {
		ScalarConverter::convert(argv[1]);
	} else {
		std::cout << "Usage: ./convert [value]" << std::endl;
		return (1);	
	}
	return (0);	
}