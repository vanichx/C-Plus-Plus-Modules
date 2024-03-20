/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:22:01 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/20 12:34:48 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal
{
	// Private attributes
	private:
		Brain* _brain;
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