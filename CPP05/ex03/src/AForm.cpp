/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:55:35 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/02 17:40:47 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm() : _name("Unknown"), _signedStatus(false), _gradeToSign(50), _gradeToExecute(50) {
	// std::cout << "AForm" GR " Default constructor	" R " called" << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signedStatus(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (_gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (_gradeToSign < 0)
		throw AForm::GradeTooHighException();
	if (_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	if (_gradeToExecute < 0)
		throw AForm::GradeTooHighException();
    // std::cout << "AForm" Y " String constructor      " R " called" << std::endl;
}

AForm::AForm(const AForm & other) : _name(other._name), _signedStatus(other._signedStatus), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	if (_gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (_gradeToSign < 0)
		throw AForm::GradeTooHighException();
	if (_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	if (_gradeToExecute < 0)
		throw AForm::GradeTooHighException();
	*this = other;
	// std::cout << "AForm" M " Copy constructor		" R " called" << std::endl;
}

AForm &AForm::operator=(const AForm & other) {
	// std::cout << "AForm" BLD " Assigment operator		" R " called" << std::endl;
	if (this != &other) {
		this->_signedStatus = other._signedStatus;
	}
	return (*this);
}

AForm::~AForm() {
	// std::cout << "AForm" RD " Destructor			" R " called" << std::endl;
}

std::string AForm::getName() const {
	return (_name);
}

bool AForm::getSignedStatus() const {
	return (_signedStatus);
}

int AForm::getGradeToSign() const {
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const {
	return (_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() <=  getGradeToSign()) {
		_signedStatus = true;
		std::cout << GR << getName() << R " signed by " GR << bureaucrat.getName() << R " succesfully" << std::endl;
	}
	else {
		std::cout << GR BLD << bureaucrat.getName() << R " bureaucrat has no permission to sign this form , the min grade for the " Y << getName() << R " is " GR << getGradeToSign() << R " points!" << std::endl;
		throw AForm::GradeTooLowException();
	}
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Sorry the form cannot be signed , due to high grade of the bureaucrat");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Sorry the form cannot be signed , due to low grade of the bureaucrat");
}

const char *AForm::FormIsNotYetSignedExecption::what() const throw() {
	return ("Form" RD BLD "not signed" R "yet");
}

std::ostream &operator<<(std::ostream &stream, const AForm& Aform) {
	stream << GR BLD << Aform.getName() << R " form, signed status is - " GR BLD << Aform.getSignedStatus() << R ", grade to sign is - " GR BLD << Aform.getGradeToSign() << R ", grade to execute is " GR BLD << Aform.getGradeToExecute() << R;
	return (stream);
}