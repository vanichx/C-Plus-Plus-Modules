/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:26:36 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/28 14:38:26 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Bureaucrat
{
	// Private attributes
	private:
		std::string _name;
		int _grade;
	// Constructors
	public:
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat & other);
		Bureaucrat &operator=(const Bureaucrat & other);
	// Destructors
	public:
		~Bureaucrat();
	// Public methods
	public:
		std::string getName();
		int getGrade();
};

#endif