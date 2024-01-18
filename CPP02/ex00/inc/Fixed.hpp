/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:19:56 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/18 13:08:59 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include "Colors.h"

class Fixed {
	// Private variables 
	private:
		int value;
		static const int ffractionalBits = 8;
	// Constructors ~ Destructors
	public: 
		Fixed();
		Fixed(const Fixed& otherClass);
		Fixed &operator=(const Fixed &other);
		~Fixed();
	// Public Methods
	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
};


#endif