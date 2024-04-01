/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:55:35 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/01 14:09:42 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form() : _name("Unknown"), _signedStatus(false), _gradeToSign(50), _gradeToExecute(50) {
	// std::cout << "Form" GR " Default constructor	" R " called" << std::endl;
}

Form::Form(const std::string & name) : _name(name), _signedStatus(false), _gradeToSign(50), _gradeToExecute(50) {
    // std::cout << "Form" Y " String constructor      " R " called" << std::endl;
}

Form::Form(const Form & other) : _name(other._name), _signedStatus(other._signedStatus), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	// std::cout << "Form" M " Copy constructor		" R " called" << std::endl;
}

Form &Form::operator=(const Form & other) {
	// std::cout << "Form" BLD " Assigment operator		" R " called" << std::endl;
	if (this != &other) {
		this->_signedStatus = other._signedStatus;
	}
	return (*this);
}

Form::~Form() {
	// std::cout << "Form" RD " Destructor			" R " called" << std::endl;
}

std::string Form::getName() const {
	return (_name);
}

bool Form::getSignedStatus() const {
	return (_signedStatus);
}

int Form::getGradeToSign() const {
	return (_gradeToSign);
}

int Form::getGradeToExecute() const {
	return (_gradeToExecute);
}

void Form::beSigned(const Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() <=  _gradeToSign) {
		_signedStatus = true;
	}
	else {
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Sorry the form cannot be signed , due to low grade of the bureaucrat , min grade is" RD " 75" R);
}

std::ostream &operator<<(std::ostream &stream, const Form& form) {
	stream << GR BLD << form.getName() << R " form, signed status is - " GR BLD << form.getSignedStatus() << R ", grade to sign is - " GR BLD << form.getGradeToSign() << R ", grade to execute is " GR BLD << form.getGradeToExecute() << R;
	return (stream);
}