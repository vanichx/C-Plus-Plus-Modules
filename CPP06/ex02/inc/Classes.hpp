/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:55:13 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 22:37:23 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP

#include "Colors.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <exception>

class Base {
	// Virtual destructor (required by subject)
	public:
		virtual ~Base();	
};

// Class A, B, C that publicly inherit from class Base
class A : public Base {};
class B : public Base {};
class C : public Base {};

// Funcion randomly instanciates A, B or C and returns the instance as a Base pointer.
Base * generate(void);
// Function prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base* p);
// The same as previus but using reference.
void identify(Base& p);

#endif