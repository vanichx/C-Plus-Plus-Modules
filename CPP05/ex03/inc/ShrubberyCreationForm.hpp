/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:06:58 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 14:07:00 by ipetruni         ###   ########.fr       */
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