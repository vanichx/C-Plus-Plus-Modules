/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:37:38 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 11:04:31 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream> // Used for std::istringstream similar to std::cin which reads from the standard input stream, but std::istringstream reads from a string instead
#include <stack>
#include <list>
#include <algorithm>

class RPN {
	
	// Stack Container
	private:
		std::stack<int> _myStack;
	// Constructors
	public:
		RPN(const std::string inputString);
	private:
		RPN();
		RPN(RPN & otherRPN);
		RPN &operator=(RPN & otherRPN);
	// Destructors
	public:
		~RPN();
	// Methods
	public:
		void checkInput(std::string inputString);
		bool doOperation(char c);
};


#endif