/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:25:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/01 19:16:34 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

int main() 
{

	try {
		Bureaucrat Ceo("CEO", 1); // Chief Executive Officer 
		Bureaucrat Cio("CIO", 44); // Chief Information Officer
		Bureaucrat Cfo("CFO", 4); // Chief Financial Officer

		ShrubberyCreationForm form1("Contract"); // Need for sign 145, exec 137
		RobotomyRequestForm form2("Digital form"); // Need for sign 72, exec 45
		PresidentialPardonForm form3("Agreement"); // Need for sign 25, exec 5

		form1.beSigned(Ceo);
		form2.beSigned(Cio);
		form3.beSigned(Cfo);

		form1.execute(Ceo);
		form2.execute(Cio);
		form3.execute(Cfo);		
	}

	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
