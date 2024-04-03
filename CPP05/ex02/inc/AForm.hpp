/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:07:13 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 14:07:15 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <exception>
#include "Colors.h"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	// Private attributes
	private:
		const std::string	_name;
		bool				_signedStatus;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	// Constructors
	public:
		AForm(); // Default constructor
		AForm(const AForm & other); // Copy constructor
		AForm(const std::string name, int gradeToSign, int gradeToExecute); // Grades init constructor
		AForm &operator=(const AForm & other); // Assigment operator

	// Destructors
	public:
		virtual ~AForm();
	
	// Public getters
	public:
		std::string getName() const; // Getter for the name
		int 		getGradeToSign() const; // Getter for the gradeToSign
		int 		getGradeToExecute() const; // Getter for the gradeToExecute
		bool		getSignedStatus() const;  // Getter for the signedStatus
	
	// Public member functions
	public:
		void	beSigned(const Bureaucrat & bureaucrat);
	
	// Exception classes
	public:
		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw();
		};
		class FormIsNotYetSignedExecption : public std::exception {
			public:
				const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &stream, const AForm& form);

#endif