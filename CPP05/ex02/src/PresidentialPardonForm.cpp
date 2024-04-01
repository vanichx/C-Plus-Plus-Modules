/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:51:08 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/01 18:56:53 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidental default form", 25, 5), _target("Unknown target") {
	// std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : AForm(other), _target(other._target) {
	// std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = other;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidental default form", 25, 5), _target(target) {
	// std::cout << "PresidentalPardonForm target constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & other) {
	// std::cout << "PresidentialPardonForm assigment operator called" << std::endl;
	if (this != &other) {
		this->_target = other._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getSignedStatus() == false) {
		throw AForm::FormIsNotYetSignedExecption();	
	} else if (executor.getGrade() > getGradeToExecute()) {
		throw ExecutionFailExecption();
	} else {
		std::cout << "The " GR BLD << _target << R " has been pardoned by " Y "Zaphod Beeblebrox" R << std::endl;
	}
}

const char * PresidentialPardonForm::ExecutionFailExecption::what() const throw() {
	return (RD BLD "Form name execution failed:" R " the grade of the Bureaucrat is not high enough.");
}