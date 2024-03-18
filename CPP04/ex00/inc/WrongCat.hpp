/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:23:15 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/18 21:27:02 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    // Constructors
    public:
        WrongCat(); // Constructor
        WrongCat(const std::string other); // String constructor
        WrongCat(const WrongCat& other); // Copy constructor
        WrongCat &operator=(const WrongCat& other); // Copy assignment operator
    // Destructors
    public:
        virtual ~WrongCat();
    // Public methods
    public:
        void makeSound() const; // Method to reproduce the sound of cat/dog
};

#endif