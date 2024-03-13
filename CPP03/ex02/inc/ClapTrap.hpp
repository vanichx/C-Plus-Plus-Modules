/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:38:13 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/13 18:52:42 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#include "Colors.h"

class ClapTrap {

    // Private attributes
    public:
        int _hit_points;
        int _energypoints;
        int _attackpoints;
        std::string _name;
    // Public methods
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    // Constructors
    public:
        ClapTrap(); // Default constructor
        ClapTrap(std::string name); // String constructor
        ClapTrap(const ClapTrap& other); // Copy constructor
        ClapTrap &operator=(const ClapTrap &other); // Copy assignment operator
    // ~Destructors
    public:
       ~ClapTrap();
};


#endif