/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:25:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 14:41:01 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main() 
{

	Bureaucrat num1("Erik", 50);

	Form a("42 Agreement");

	std::cout << a << std::endl;

	try {
		a.beSigned(num1);
		num1.signForm(a);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
