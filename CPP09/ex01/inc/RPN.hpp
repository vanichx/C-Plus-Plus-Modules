/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:37:38 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/30 11:56:41 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <algorithm>

class RPN {
	// Constructors
	public:
		RPN();
		RPN(const std::string values);
	private:
		RPN(RPN & other);
		RPN &operator=(RPN & other);
	// Destructors
	public:
		~RPN();
	// Methods
	
};


#endif