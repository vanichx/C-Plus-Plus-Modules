/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:23:05 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/09 15:27:03 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

void HumanA::attack(void) {
	std::cout << BLUE << _name << RESET << "	attacks with their	" << GREEN << _weapon.getType() << RESET << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapons) : _weapon(weapons) {
	_name = name;
	_weapon = weapons;
}

HumanA::~HumanA() {
}