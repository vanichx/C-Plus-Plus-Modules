/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:09:07 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/02 16:15:42 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
	// Constructors
	public:
		Intern(); // Default constructor
		Intern(const Intern & other); // Copy constructor
		Intern &operator=(const Intern & other); // Assigment operator
	// Destructor
	public:
		~Intern();
	// Public methods
	public:
		AForm* makeForm(const std::string name, const std::string target); // Main intern's method
	// Public Exeptions
	public:
		class WrongFormGivenException : public std::exception {
			public:
				const char * what() const throw();
		};
};



#endif