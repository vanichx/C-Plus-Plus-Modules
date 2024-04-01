/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:25:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/01 18:42:31 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"


int main() 
{

	try {
		Bureaucrat burnum1("MAIN", 134);
	
		ShrubberyCreationForm num1("#1");

		num1.beSigned(burnum1);

		num1.execute(burnum1);
		
	}

	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}


	// std::cout << num1 << std::endl;


	return 0;
}


// Need to throw proper exception 