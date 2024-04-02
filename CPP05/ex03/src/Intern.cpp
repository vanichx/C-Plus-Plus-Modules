/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:11:26 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/02 17:19:46 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

Intern::Intern() {
	// std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern & other) {
	*this = other;
	// std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern & other) {
	// std::cout << "Inter assigment operator called" << std::endl;
	if (this != &other) {
		*this = other;
	}
	return (*this);
}

Intern::~Intern() {
	// std::cout << "Intern default destructor was called" << std::endl;
}

const char *Intern::WrongFormGivenException::what() const throw() {
	return (RD "Specified form was not found , try one more time please!" R);
}

AForm* Intern::makeForm(const std::string name, const std::string target) {

	std::string forms[3] = 
	{
		"PresidentialPardonForm",
		"ShrubberyCreationForm",
		"RobotomyRequestForm"
	};
	int i = 0;
	for (; i < 3; i++) {
		if (!name.compare(forms[i])) {
			switch (i) {
			case 0:
				std::cout << GR << "Intern created " << Y << forms[0] << R << std::endl;
				return (new PresidentialPardonForm(target));
			case 1:
				std::cout << GR << "Intern created " << Y << forms[1] << R << std::endl;
				return (new ShrubberyCreationForm(target));
			case 2:
				std::cout << GR << "Intern created " << Y << forms[2] << R << std::endl;
				return (new RobotomyRequestForm(target));
			}
			break;
		}
	}
	if (i <= 3)
		throw WrongFormGivenException();
	return (NULL);
}