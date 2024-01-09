/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:17:20 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/09 15:32:46 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

void HumanB::attack(void) {
	std::cout << BLUE << _name << RESET << "	attacks with their	" << GREEN <<_weapon->getType() << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

HumanB::HumanB(std::string name){
	_name = name;
}

HumanB::~HumanB() {
}