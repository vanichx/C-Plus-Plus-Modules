/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:53:16 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/20 12:34:58 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include "Colors.h"

class WrongAnimal
{
	// Private attributes
	protected:
		std::string _type;
	// Constructors
	public:
		WrongAnimal(); // Constructor
		WrongAnimal(const std::string other); // String constructor
		WrongAnimal(const WrongAnimal& other); // Copy constructor
		WrongAnimal &operator=(const WrongAnimal& other); // Copy assignment operator
	// Destructors
	public:
		virtual ~WrongAnimal();
	// Public methods
	public:
		std::string getType() const; // Method to get type of class
		virtual void makeSound() const; // Method to reproduce the sound of cat/dog
};

#endif