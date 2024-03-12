/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:43:59 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/12 15:59:22 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << GR "Default constructor for ScavTrap called" R << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	
    _hit_points = 100;
    _energypoints = 10;
    _attackpoints = 0;
    std::cout << BL "String constructor called" R << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    *this = other;
    std::cout << Y "Copy constructor for ScavTrap called" R << std::endl;
}



void ScavTrap::attack(const std::string& target) : ClapTrap() {
    if (_hit_points <= 0){
        std::cout << "ScavTrap " << _name << RD " is dead" R << std::cout;
        return;
    } else if (_energypoints <= 0) {
        std::cout << "ScavTrap " << _name << RD " is out of energy points!" R << std::cout;
        return;
    } else {
        std::cout << "ScavTrap " GR << this->_name << R " attacks " RD << target << R ", causing " RD << _attackpoints << R " points of damage!" << std::endl;
        _energypoints--;
    }
}