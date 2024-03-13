/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:37:55 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/13 20:37:59 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
    // Constructors
    public:
        FlagTrap(); // Default constructor
        FlagTrap(const std::string& name); // String constructor
        FlagTrap(const FlagTrap& otherClass); // Copy constructor
        FlagTrap &operator=(const FlagTrap& other); // Copy assigment operator
    
    // Destructors
    public:
        ~FlagTrap();

    // Public methods
    public:
        void highFivesGuys(void); // Gives five to everybody
};


#endif