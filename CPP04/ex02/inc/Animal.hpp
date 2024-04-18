/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:59 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 14:41:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Colors.h"
#include "Brain.hpp"


class Animal
{
	// Private attributes
	protected:
		std::string _type;
	// Constructors
	public:
		Animal(); // Default constructor
		Animal(const Animal &other); // Copy constructor
		Animal(const std::string type); // String constructor
		Animal &operator=(const Animal& other); // Copy assignment operator
	// Destructors
	public:
		virtual ~Animal();
	// Public Methods
	public:
		virtual void makeSound() const = 0; // Pure virtual method
		std::string getType() const;
};

#endif