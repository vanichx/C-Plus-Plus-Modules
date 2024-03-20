/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:23:58 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/20 14:58:01 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor for " GR << _type << R " called" << std::endl;
}

WrongCat::WrongCat(const std::string type)
{
	_type = type;
	std::cout << "WrongCat string constructor for " M << _type << R " called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
	std::cout << "WrongCat copy constructor for " M << this->_type << R " called" << std::endl; 
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy assigment operator for " << _type << " called" << std::endl;
	if (this != &other) 
		this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat detsructor for " RD << _type << R "called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat makes" BL " Wrong Meow! " R "sound" << std::endl;
}
