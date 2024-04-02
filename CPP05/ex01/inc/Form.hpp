/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:55:27 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/02 17:53:03 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <exception>
#include "Colors.h"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	// Private attributes
	private:
		const std::string	_name;
		bool				_signedStatus;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	// Constructors
	public:
		Form(); // Default constructor
		Form(const Form & other); // Copy constructor
		Form(const std::string & name); // String constructor
		Form &operator=(const Form & other); // Assigment operator

	// Destructors
	public:
		~Form();
	
	// Public getters
	public:
		std::string getName() const; // Getter for the name
		int 		getGradeToSign() const; // Getter for the gradeToSign
		int 		getGradeToExecute() const; // Getter for the gradeToExecute
		bool		getSignedStatus() const;  // Getter for the signedStatus
	
	// Public member functions
	public:
		void		beSigned(const Bureaucrat & bureaucrat);
	
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
};

std::ostream &operator<<(std::ostream &stream, const Form& form);

#endif