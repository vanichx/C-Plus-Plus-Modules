/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:53:59 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/19 22:39:27 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Colors.h"

class Brain
{
	// Public atributes
    public:
	    std::string _ideas[100];
    // Constructors
    public:
        Brain(); // Default constructor
        Brain(const Brain& other); // Copy constructor
        Brain &operator=(const Brain& other); // Copy assigment operator
    // Destructors
    public:
        ~Brain();
	
};



#endif