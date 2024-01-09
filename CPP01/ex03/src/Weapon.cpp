/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:18:48 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/09 15:19:56 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

const std::string &Weapon::getType() {
	return(_type);
}

void Weapon::setType(const std::string type) {
	_type = type;
}

Weapon::Weapon(const std:: string &type) {
	setType(type);
}

Weapon::Weapon() {
	_type = "default constructor";
}

Weapon::~Weapon() {
	
}
