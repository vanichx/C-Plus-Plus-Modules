/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:04:36 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 11:16:09 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <iostream>
#include <string>
#include "Colors.h"
#include "Data.hpp"

class Serializer {

	// Private constructor's
	private:
		Serializer(); //Default constructor
		Serializer(const Serializer & other); // Copy constructor
		Serializer &operator=(const Serializer & other); // Assigment opperator
	private:
		~Serializer(); // Destructor
	// Public methods
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};


#endif