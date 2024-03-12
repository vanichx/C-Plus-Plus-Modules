/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:44:12 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/12 15:52:32 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	// Constructors
	public:
		ScavTrap(); // Default constructor
		ScavTrap(std::string name); // String constructor
		ScavTrap(const ScavTrap& other); // Copy constructor
	// Destructors
	public:
		~ScavTrap();
	// Public methods
	public:
		void guardGate();
};






#endif