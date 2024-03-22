/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:55:52 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 13:17:57 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Colors.h"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	// Protected attributes
	protected:
		std::string _type;
	// Constructors
	public:
		AMateria(); // Default constructor
		AMateria(std::string const & type); // String constructor
		AMateria(const AMateria & other); // Copy constructor
		AMateria &operator=(const AMateria& other); // Assigment operator
	// Destructors
	public:
		virtual ~AMateria();
	// Public methods
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};



#endif