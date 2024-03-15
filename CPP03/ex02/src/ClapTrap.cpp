/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:38:50 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/15 16:12:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "No Name";
	this->_hit_points = 10;
	this->_energypoints = 10;
	this->_attackpoints = 0;
	std::cout <<  "Default constructor for ClapTrap - " GR << _name << R " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hit_points = 10;
	this->_energypoints = 10;
	this->_attackpoints = 0;
	std::cout << GR "String constructor for ClapTrap - " GR << _name << R " called" R << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "Copy constructor for ClapTrap - " Y << _name << R " called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->_hit_points = other._hit_points;
	this->_energypoints = other._energypoints;
	this->_attackpoints = other._attackpoints;
	std::cout << M "Copy assignment operator for ClapTrap called" R << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor for ClapTrap - " RD << _name << R " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_hit_points <= 0){
		std::cout << "ClapTrap " << _name << RD " is dead" R << std::cout;
		return;
	} else if (_energypoints <= 0) {
		std::cout << "ClapTrap " << _name << RD " is out of energy points!" R << std::cout;
		return;
	} else {
		std::cout << "ClapTrap " GR << this->_name << R " attacks " RD << target << R ", causing " RD << _attackpoints << R " points of damage!" << std::endl;
		_energypoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap " << _name << R " is dead!" RD << std::endl;
		return;
	} else {
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " received " RD << amount << R " of damage!" << std::endl;
		std::cout << "ClapTrap " << _name << " has " BL << _hit_points << R " Hit Points remaining!" << std::endl;
	}
	if (_hit_points <= 0) {
		std::cout << "ClapTrap " << _name << RD " is died!" R << std::endl;
		return;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_points <= 0) {
		std::cout << "ClapTrap " GR << _name << RD "  is dead!" R << std::endl;
		return;        
	}
	else if (_energypoints <= 0)
		std::cout << "ClapTrap " GR << _name << R " is out of energy points!" << std::endl;
	else {
		std::cout << "ClapTrap " GR << this->_name << R " heals " GR << amount << R " of hit points!" << std::endl;
		_hit_points += amount;
		_energypoints--;
		std::cout << "ClapTrap " GR << this->_name << R " has " BL << _hit_points << R " Hit Points remaining!" << std::endl;
	}
}