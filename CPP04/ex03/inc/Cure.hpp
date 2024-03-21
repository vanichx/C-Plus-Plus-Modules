/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:11:48 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/21 18:17:16 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	// Constructors
	public:
		Cure(); // Default constructor 
		Cure(std::string const & type); // String constructor
		Cure(const Cure & other); // Copy constructor
		Cure &operator=(const Cure& other); // Assigment operator
	// Destructors
	public:
		~Cure();
	// Public methods
	public:
		Cure* clone() const;
		// virtual void use(ICharacter& target);
};

#endif