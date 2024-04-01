/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:45:05 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/01 18:26:57 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	// Private attributes
	private:
		std::string _target;

	// Constructors
	public:
		ShrubberyCreationForm(); // Default constructor
		ShrubberyCreationForm(const std::string target); // Target constructor
		ShrubberyCreationForm(const ShrubberyCreationForm & other); // Copy constructor
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm & other); // Assigment operator;

	// Destructors
	public:
		~ShrubberyCreationForm();

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