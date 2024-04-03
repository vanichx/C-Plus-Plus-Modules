/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:06:47 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 14:06:49 by ipetruni         ###   ########.fr       */
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