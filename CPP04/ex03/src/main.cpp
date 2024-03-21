/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:19:24 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/21 19:11:04 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

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
	c.clone();

	delete first;
	delete second;
	
	/// Как удалить С оно создало еше одну материю и нужно почистить утечку

   return (0);
}