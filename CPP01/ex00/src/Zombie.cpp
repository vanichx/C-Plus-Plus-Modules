/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:32:12 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/08 15:51:48 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << RED "    has been destroyed." << RESET << std::endl;
}

void Zombie::announce(void) {
	std::cout  <<this->_name << YELLOW "    BraiiiiiiinnnzzzZ..." << RESET <<std::endl;
}