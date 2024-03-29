/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:26:24 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/29 17:09:07 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(100) {
	// std::cout << "Bureaucrat" GR " Default constructor		" R " called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade) {
	// std::cout << "Bureaucrat" M " Copy constructor		" R " called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name) {
	// std::cout << "Bureaucrat" Y " Name & Grade constructor	" R " called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else {
		_grade = grade;
		std::cout << "Bureaucrat " GR << getName() << R " is instantiated with grade - " GR << getGrade() << R " !" << std::endl;
	}
}

void Bureaucrat::incrementGrade() {
	if (_grade > 1) {
		_grade--;
		std::cout << "Grade for " BLD << getName() << GR " incremented " R "succesfully, grade = " << getGrade() << std::endl;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	if (_grade < 150) {
		_grade++;
		std::cout << "Grade for " BLD << getName() << RD " decremented " R "succesfully, grade = " << getGrade() << std::endl;
	}
	else
		throw  Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other) {
	// std::cout << "Bureaucrat" BLD " Assigment operator		" R " called" << std::endl;
	if (this != &other) {
		
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "Bureaucrat" RD " Destructor			" R " called" << std::endl;
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

std::string Bureaucrat::getName() const {
	return (_name);
}

void Bureaucrat::signForm(const Form & form) {
	if (form.getSignedStatus() == true) {
		std::cout << getName() << " signed " << form.getName() << std::endl;
	} else {
		std::cout << "couldn't sign" << form.getName() << " because ";
		if (form.getGradeToSign() > getGrade()) {
			std::cout << "grade to sign is bigger than current grade" << std::endl;
		}
	}
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return (RD "Grade too High!" R);
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return (BL "Grade too Low!" R);
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat& bureaucrat) {
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (stream);
}
