/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:17:20 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 09:34:17 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB() {}

void HumanB::attack() {
	if (_weapon == NULL)
		std::cout << B << _name << R << "	attacks with" << Y << "		no weapon " << R << std::endl;
	else
		std::cout << B << _name << R << "	attacks with their	" << GR <<_weapon->getType() << R << std::endl;
}

void HumanB::setWeapon(Weapon &type) {
	_weapon = &type;
}

void HumanB::setWeapon(Weapon *type) {
	_weapon = type;
}