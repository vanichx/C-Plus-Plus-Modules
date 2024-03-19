/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:19:24 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 21:41:21 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main() 
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
    j->makeSound();
	meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* newMeta = new WrongAnimal();
    const WrongAnimal* a = new WrongCat();

    std::cout << newMeta->getType() << " " << std::endl;
    std::cout << a->getType() << " " << std::endl;
    newMeta->makeSound();
    a->makeSound();

    delete newMeta;
    delete a;

	return 0;
}