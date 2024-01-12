/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:32:12 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 16:30:12 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() 
{
}


void Zombie::nameZombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << RD "    has been destroyed." << R << std::endl;
}

void Zombie::announce(void) {
	std::cout  <<this->_name << Y "    BraiiiiiiinnnzzzZ..." << R <<std::endl;
}