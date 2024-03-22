/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:19:24 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 16:25:28 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/IMateriaSource.hpp"

int main() 
{
	// AMateria* first = new Ice();
	// AMateria* second = new Cure();

	// std::cout << "first type is " << first->getType() << std::endl;
	// std::cout << "second type is " << second->getType() << std::endl;
	
	// Ice a;
	// Cure b;

	// std::cout << "a.type is " << a.getType() << std::endl;
	// std::cout << "b.type is " << b.getType() << std::endl;
	
	
	// Ice c;

	// AMateria *third = c.clone();

	// IMateriaSource* src  = new MateriaSource();

	// src->learnMateria(new Ice());

	// ICharacter* bob = new Character("bob");

	// bob->getName();

	

	// Character on;

	// std::cout << on.getName() << std::endl;

	// delete first;
	// delete second;
	// delete third;



	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// delete src;


	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	// std::cout << "Hi      " << std::endl;
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

   return (0);
}