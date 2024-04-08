/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:00:22 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 23:38:49 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Classes.hpp"

class Unknown : public Base {};

int main(void) {
	
	// Base * newClass = generate();
	// Base * newClass = new Unknown;
	Base * newClass = NULL;

	identify(newClass);
	identify(*newClass);

	delete newClass;
	
	return 0;
}
