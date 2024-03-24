/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:11:48 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/24 16:06:54 by ipetruni         ###   ########.fr       */
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
		Cure(const Cure & other); // Copy constructor
		Cure &operator=(const Cure& other); // Assigment operator
	// Destructors
	public:
		~Cure();
	// Public methods
	public:
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif