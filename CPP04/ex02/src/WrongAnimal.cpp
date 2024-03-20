/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:52:56 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/18 21:40:44 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal " GR << _type << R " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
    std::cout << "Wrong animal string constructor for " M << _type << R " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
    std::cout << "Wrong animal copy constructor for " M << this->_type << R " called" << std::endl; 
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Wrong animal copy assigment operator for " << _type << " called" << std::endl;
    if (this != &other) 
    {
        this->_type = other._type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal detsructor for " RD << _type << R " called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal makes" BL " no " R "sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}