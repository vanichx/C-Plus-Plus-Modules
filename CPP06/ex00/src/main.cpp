/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:09:51 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/04 18:47:05 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	
	if (argc == 2 && argv[1] != NULL) {
		ScalarConverter::convert(argv[1]);
	} else {
		if (argc < 2) {
			std::cout << "Input can't be empty , try one more time" << std::endl;
		} else if (argc > 2) {
			std::cout << "Sorry but program can work only with one argument" << std::endl;
			std::cout << "Example ./ScalarConverter arg_one " << std::endl;
		} 
	}
	return (0);	
}