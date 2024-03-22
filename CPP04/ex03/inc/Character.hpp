/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:08:55 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 13:23:28 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include "ICharacter.hpp"

//verpiss dich

// ich verpisse mich 

class Character : public ICharacter
{
	protected:
		std::string	_nameCharacter; // Name of character
		AMateria*	_eqiupment[4]; // Materias in the equipment
	// Constructors
	public:
		Character(); // Default constructor
		Character(std::string const & name); // String constructor
		Character(const Character & otherCharacter); // Copy constructor with deep copy
		Character &operator=(const Character & other); // Assigment operator
	// Destructors
	public:
		~Character();
	// Public methods
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	
};



#endif