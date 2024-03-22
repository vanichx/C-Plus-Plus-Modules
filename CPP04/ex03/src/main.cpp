/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:19:24 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 12:44:26 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Character.hpp"

int main() 
{
	AMateria* first = new Ice();
	AMateria* second = new Cure();

	std::cout << "first type is " << first->getType() << std::endl;
	std::cout << "second type is " << second->getType() << std::endl;
	
	Ice a;
	Cure b;

	std::cout << "a.type is " << a.getType() << std::endl;
	std::cout << "b.type is " << b.getType() << std::endl;
	
	
	Ice c;

	AMateria *third = c.clone();

	Character on;

	delete first;
	delete second;
	delete third;

   return (0);
}