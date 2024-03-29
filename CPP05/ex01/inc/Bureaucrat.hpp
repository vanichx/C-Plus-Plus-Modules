/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:26:36 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/29 16:48:40 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <exception>
#include "Colors.h"
#include "Form.hpp"

class Bureaucrat
{
	// Private attributes
	private:
		const std::string	_name;
		int					_grade;

	// Constructors
	public:
		Bureaucrat(); // Default constructor
		Bureaucrat(const std::string & name, int grade);// Name & Grade constructor
		Bureaucrat(const Bureaucrat & other); // Copy constructor
		Bureaucrat &operator=(const Bureaucrat & other); // Assigment operator

	// Destructors
	public:
		~Bureaucrat();

	// Public getters
	public:
		std::string getName() const; // Getter for the name
		int 		getGrade() const; // Getter for the grade

	// Pubclic method for Form class
		void		signForm(const Form & form);

	// Public Grade modification methods
		void		incrementGrade();
		void		decrementGrade();
	// Exception classes
	public:
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat& bureaucrat);

#endif