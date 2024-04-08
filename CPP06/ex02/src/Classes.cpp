/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:39:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 15:24:59 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Classes.hpp"

Base::~Base() {
	// std::cout << "Base Destructor called" << std::endl;
}

Base * generate(void) {
	
	int i;
	
	srand(time(NULL));
	i = rand() % 3 + 1;

	// std::cout << Y "Welcome to the function generate" R << std::endl;

	switch (i)
	{
		case 1:
			// std::cout << "\tClass" GR BLD " A " R "generated " << std::endl;
			return (new A);
			break;
		case 2:
			// std::cout << "\tClass" BL BLD " B " R "generated " << std::endl;
			return (new B);
			break;
		case 3:
			// std::cout << "\tClass" M BLD " C " R "generated " << std::endl;
			return (new C);
			break;
		default:
			return (NULL);
			break;
	}
	return (0);
}

void identify(Base* p) {

	if (p == NULL)
		std::cout << "\tThis is " BLD "nullptr" R << std::endl;
	else if (dynamic_cast<A *> (p))
		std::cout << "\tThis is " BLD GR "A class" R << std::endl;
	else if (dynamic_cast<B *> (p))
		std::cout << "\tThis is " BLD BL "B class" R << std::endl;
	else if (dynamic_cast<C *> (p))
		std::cout << "\tThis is " BLD M "C class" R << std::endl;
	else
		std::cout << "\tThis is " BLD "Unknown class" R << std::endl;
}
void identify(Base& p) {
	(void)p;
}