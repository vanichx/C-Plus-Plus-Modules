/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:07:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 14:07:31 by ipetruni         ###   ########.fr       */
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