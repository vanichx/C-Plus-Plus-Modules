/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:22:01 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 20:48:25 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal
{
	// Constructors
	public:
		Cat(); // Default constructor
		Cat(const Cat &other); // Copy constructor
		Cat(const std::string type); // String constructor
		Cat &operator=(const Cat& other); // Copy assignment operator
	// Destructors
	public:
		~Cat();
	// Public Methods
	public:
		void makeSound() const; // method to reproduce the sound of cat/dog
};


#endif