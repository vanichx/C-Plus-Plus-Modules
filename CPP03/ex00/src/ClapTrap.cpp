/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:38:50 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/10 18:20:14 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->_name = "No Name";
    this->_hit_points = 10;
    this->_energypoints = 10;
    this->_attackpoints = 0;
    std::cout << GR "Default constructor called" R << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_hit_points = 10;
    this->_energypoints = 10;
    this->_attackpoints = 0;
    std::cout << BL "String constructor called" R << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << Y "Copy constructor called" R << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    this->_hit_points = other._hit_points;
    this->_energypoints = other._energypoints;
    this->_attackpoints = other._attackpoints;
    std::cout << M "Copy assignment operator called" R << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << RD "Destructor called" R << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_hit_points <= 0){
        std::cout << "ClapTrap " << _name << RD " is dead" R << std::cout;
        return;
    } else if (_energypoints <= 0) {
        std::cout << "Clap Trap " << _name << RD " is out of energy points!" R << std::cout;
        return;
    } else {
        std::cout << "Clap Trap " GR << this->_name << R " attacks " RD << target << R ", causing " RD << _attackpoints << R " points of damage!" << std::endl;
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
        std::cout << "ClapTrap " << _name << RD " is dead!" R << std::endl;
        return;        
    }
    else if (_energypoints <= 0)
        std::cout << "ClapTrap " << _name << Y " is out of energy points!" R << std::endl;
    else {
        std::cout << "ClapTrap " << this->_name << " heals " GR << amount << R " of hit points!" << std::endl;
        _hit_points += amount;
        _energypoints--;
        std::cout << "ClapTrap " << this->_name << " has " BL << _hit_points << R " Hit Points remaining!" << std::endl;
    }
}