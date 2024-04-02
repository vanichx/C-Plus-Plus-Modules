/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:26:24 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/02 18:33:32 by ipetruni         ###   ########.fr       */
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

void Bureaucrat::signForm(AForm & form) {
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << GR << _name << R << " couldn't sign form '" << R << form.getName() << Y << "' because "; 
		std::cerr << e.what() << '\n';
		return ;
	}
	std::cout << GR << _name << R << " signed '" << Y << form.getName() << R << "' form" << R << std::endl;
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
