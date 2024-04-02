/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:25:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/02 18:33:17 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Intern.hpp"

int main() 
{
	try {
		Bureaucrat someRadomBureaucrat("Erik", 71);
		Intern someRandomIntern;
		AForm* rrf;
		
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "im working");
		
		someRadomBureaucrat.signForm(*rrf);
		
		delete rrf;
	}

	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	
	return (0);
}
