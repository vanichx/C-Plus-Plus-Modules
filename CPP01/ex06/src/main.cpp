/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:55:58 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 13:54:54 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

bool onlySpace(const std::string& str) {
	for (size_t i = 0; i < str.length(); ++i) {
		if (!std::isspace(str[i]))
			return (true);
	}
	return (false);
}

int main(void) {

	Harl harl;
	std::string level;

	while (42) {
		if (std::cin.eof())
			break;
		std::cout << "Please enter level " << GR "(DEBUG, INFO, WARNING or ERROR) :" R; 
		
		if (!std::getline(std::cin, level))
			break;
		if (level.empty() || !onlySpace(level)) {
			std::cout << Y "		Level can't be empty , or contain only spaces" R << std::endl;
			continue;
		}
		harl.complain(level);
		if (!level.compare("EXIT"))
			break;
		level.clear();
	}
	return (0);
}