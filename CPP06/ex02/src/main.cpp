/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:00:22 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 15:39:34 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Classes.hpp"

class Unknown : public Base {};

int main(void) {
	
	// Base * newClass = generate();
	Base * newClass = new Unknown;

	identify(newClass);

	delete newClass;
	
	return 0;
}

/*
Does the program work as required?
Check the code. Did the student use the dynamic_cast to identify the real 
type?
void identify(Base* p) should check if the cast return is NULL.
void identify(Base& p) should use a try and catch block to check if the cast failed.

(In case you're wondering, the header <typeinfo> must not appear 
anywhere.)
*/