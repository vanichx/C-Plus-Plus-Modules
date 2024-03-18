/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:59 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 15:17:26 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Colors.h"


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
		Animal &operator=(const Animal& other);
	// Destructors
	public:
		~Animal();
	// Public Methods
	public:
		virtual void makeSound() const; // method to reproduce the sound of cat/dog
		std::string getType() const;
};

#endif