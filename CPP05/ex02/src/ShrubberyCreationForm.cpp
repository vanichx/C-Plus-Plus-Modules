/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:44:58 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/01 18:40:47 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery unknown form", 145, 137), _target("Unknown target") {
	// std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other), _target(other._target) {
	// std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = other;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery unknown form", 145, 137), _target(target) {
	// std::cout << "ShrubberyCreationForm target constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other) {
	// std::cout << "ShrubberyCreationForm assigment operator called" << std::endl;
	if (this != &other) {
		this->_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	// std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (getSignedStatus() == false) {
		throw AForm::FormIsNotYetSignedExecption();	
	} else if (executor.getGrade() > getGradeToExecute()) {
		throw ExecutionFailExecption();
	} else {
		std::ofstream newFile;
		newFile.open((_target + "_shrubbery").c_str() , std::ios::trunc);
		newFile << "               ,@@@@@@@,                " << std::endl;
		newFile << "         ,,,. ,@@@@@@/@@,  .oo8888o.    " << std::endl;
		newFile << "      ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o " << std::endl;
		newFile << "    ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88' " << std::endl;
		newFile << "    %&&%&%&/%&&%@@|@@/ /@@@88888|88888' " << std::endl;
		newFile << "    %&&%/ %&&%&&@@| V /@@' `88|8 `/88'  " << std::endl;
		newFile << "       |o|         | |        | |       " << std::endl;
		newFile << "       |.|         | |        | |       " << std::endl;
		newFile << "       |.|         | |        | |       " << std::endl;
		newFile << "    ||/._|//_/__/  |,|_//__||/. |_//__/ " << std::endl;
		newFile.close();
	}
}

const char * ShrubberyCreationForm::ExecutionFailExecption::what() const throw() {
	return (RD BLD "Form execution failed:" R " the grade of the Bureaucrat is not high enough.");
}