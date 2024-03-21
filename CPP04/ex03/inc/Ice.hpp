/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:11:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/21 18:29:47 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	// Constructors
	public:
		Ice(); // Default constructor 
		Ice(std::string const & type); // String constructor
		Ice(const Ice & other); // Copy constructor
		Ice &operator=(const Ice& other); // Assigment operator
	// Destructors
	public:
		~Ice();
	// Public methods
	public:
		Ice* clone() const;
		void use(ICharacter& target);
};


#endif