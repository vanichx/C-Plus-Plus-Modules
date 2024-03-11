/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:39:43 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/10 18:18:44 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Neo");

    a.attack("Morpheus");
    a.takeDamage(7);
    a.beRepaired(10);
    a.takeDamage(8);
    a.takeDamage(5);
    a.beRepaired(20);
    
    return (0);    
}