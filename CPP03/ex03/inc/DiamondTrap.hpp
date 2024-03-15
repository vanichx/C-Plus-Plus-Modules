/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:51:23 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/15 16:14:22 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"


class DiamondTrap : public ScavTrap, public FlagTrap
{
	// Private atributes
	private:
		std::string _name;

	// Constructors
	public:
		DiamondTrap(); // Default constructor
		DiamondTrap(std::string name); // String constructor
		DiamondTrap(const DiamondTrap& other); // Copy constructor 
		DiamondTrap &operator=(const DiamondTrap& other); // Copy assigment operator
	
	// Destructors
	public:
		~DiamondTrap();

	// Public methods
	public:
		void attack(const std::string& target); // Attacks enemy
		void whoAmI(); // Display names
};


#endif