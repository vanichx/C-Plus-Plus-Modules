/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:22:03 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/19 22:28:40 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal 
{
	// Private attributes
	private:
        Brain* _brain;
	// Constructors
	public:
		Dog(); // Default constructor
		Dog(const Dog &other); // Copy constructor
		Dog(const std::string type); // String constructor
		Dog &operator=(const Dog& other); // Copy assignment operator
	// Destructors
	public:
		~Dog();
	// Public Methods
	public:
		void makeSound() const; // method to reproduce the sound of cat/dog
};


#endif