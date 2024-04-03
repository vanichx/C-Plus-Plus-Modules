/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:06:22 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 14:06:25 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy default form", 72, 45), _target("Unknown target") {
	// std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : AForm(other), _target(other._target) {
	// std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = other;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy default form", 72, 45), _target(target) {
	// std::cout << "RobotomyRequestForm target constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & other) {
	// std::cout << "RobotomyRequestForm assigment operator called" << std::endl;
	if (this != &other) {
		this->_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (getSignedStatus() == false) {
		throw AForm::FormIsNotYetSignedExecption();	
	} else if (executor.getGrade() > getGradeToExecute()) {
		throw ExecutionFailExecption();
	} else {
		std::cout << Y "Drilling noises ..." R << std::endl;
		if (rand() % 2) {
			std::cout << "Unfortunately the robotomy" RD BLD " failed, " R "try one more time please." << std::endl;
		} else {
			std::cout << "The " GR BLD << _target << R " has been robotomized successfully." << std::endl;           
		}
	}
}

const char * RobotomyRequestForm::ExecutionFailExecption::what() const throw() {
	return (RD BLD "Form execution failed:" R " the grade of the Bureaucrat is not high enough.");
}