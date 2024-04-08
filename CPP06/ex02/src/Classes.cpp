/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:39:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 22:40:33 by ivanpetruni      ###   ########.fr       */
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
		std::cout << "\tThis is " BLD GR "A class ptr" R << std::endl;
	else if (dynamic_cast<B *> (p))
		std::cout << "\tThis is " BLD BL "B class ptr" R << std::endl;
	else if (dynamic_cast<C *> (p))
		std::cout << "\tThis is " BLD M "C class ptr" R << std::endl;
	else
		std::cout << "\tThis is " BLD "Unknown class ptr" R << std::endl;
}
void identify(Base& p) {
	try {
		A &a = dynamic_cast<A &> (p);
		std::cout << "\tThis is " BLD GR "A class ref" R << std::endl;
		(void)a;
		return;
	}
	catch (const std::bad_cast&){}
	try {
		B &b = dynamic_cast<B &> (p);
		std::cout << "\tThis is " BLD BL "B class ref" R << std::endl;
		(void)b;
		return;
	}
	catch (const std::bad_cast&){}
	try {
		C &c = dynamic_cast<C &> (p);
		std::cout << "\tThis is " BLD M "C class ref" R << std::endl;
		(void)c;
		return;
	}
	catch (const std::bad_cast&){}
	std::cerr << "\tThis is " BLD M "Unknown class ref" R << std::endl;
}