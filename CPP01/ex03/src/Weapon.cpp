/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:18:48 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 09:30:45 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std:: string type) : _type(type) {}

Weapon::~Weapon() {}

std::string Weapon::getType() const 
{
	return(this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
}

