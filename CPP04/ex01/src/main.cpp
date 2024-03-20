/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:19:24 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/20 12:34:08 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main() 
{

    Animal* array[4];

    for (int i = 0; i <= 4; i++) {
        if (i % 2 == 0) {
            array[i] = new Dog();
        } else {
            array[i] = new Cat();
        }
    }

    for (int i = 4; i >= 0 ; i--) {
        delete array[i];
    }

    return (0);
    
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
    // j->makeSound();
	// meta->makeSound();

    // delete meta;
    // delete j;
    // delete i;

    // const WrongAnimal* newMeta = new WrongAnimal();
    // const WrongAnimal* a = new WrongCat();

    // std::cout << newMeta->getType() << " " << std::endl;
    // std::cout << a->getType() << " " << std::endl;
    // newMeta->makeSound();
    // a->makeSound();

    // delete newMeta;
    // delete a;

	// return 0;
}