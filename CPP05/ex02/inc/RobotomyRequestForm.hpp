/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:03:43 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/01 19:04:51 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	// Private attributes
	private:
		std::string _target;

	// Constructors
	public:
		RobotomyRequestForm(); // Default constructor
		RobotomyRequestForm(const std::string target); // Target constructor
		RobotomyRequestForm(const RobotomyRequestForm & other); // Copy constructor
		RobotomyRequestForm &operator=(const RobotomyRequestForm & other); // Assigment operator;

	// Destructors
	public:
		~RobotomyRequestForm();

	// Public methods
	public:
		void execute(Bureaucrat const & execute) const;
	
	// Public Execptions
	public:
		class ExecutionFailExecption : public std::exception {
			public:
				const char * what() const throw();
		};
};

#endif