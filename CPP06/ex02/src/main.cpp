/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:00:22 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/09 15:01:28 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Classes.hpp"

class Unknown : public Base {};

int main(void) {
	
	Base * newClass = generate();
	// Base * newClass = new Unknown;
	// Base * newClass = NULL;

	identify(newClass);
	identify(*newClass);

	delete newClass;
	
	return 0;
}
