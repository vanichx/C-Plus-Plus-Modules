/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:46:04 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/01 17:25:48 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	// Private attributes
	private:
		std::string _target;

	// Constructors
	public:
		PresidentialPardonForm(); // Default constructor
		PresidentialPardonForm(const std::string target); // Target constructor
		PresidentialPardonForm(const PresidentialPardonForm & other); // Copy constructor
		PresidentialPardonForm &operator=(const PresidentialPardonForm & other); // Assigment operator;

	// Destructors
	public:
		~PresidentialPardonForm();

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