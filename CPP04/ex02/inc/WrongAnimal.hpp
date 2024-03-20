/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:53:16 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/18 21:33:44 by ivanpetruni      ###   ########.fr       */
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