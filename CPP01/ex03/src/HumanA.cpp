/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:23:05 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 09:31:30 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){}

HumanA::~HumanA() {}

void HumanA::attack(void) {
	std::cout << B << _name << R << "	attacks with their	" << GR << _weapon.getType() << R << std::endl;
}
