/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:39:43 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/12 17:10:46 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

// int main(void)
// {
// 	ClapTrap a("Neo");
// 	ScavTrap b("Morpheus");

// 	a.attack("Morpheus");
// 	a.takeDamage(7);
// 	a.beRepaired(10);
// 	a.takeDamage(8);
// 	a.takeDamage(5);
// 	a.beRepaired(20);
// 	b.guardGate();
// 	b.takeDamage(10);
// 	b.beRepaired(20);
// 	b.attack("Agent Smith");
// 	return (0);
// }


int main ()
{
    ClapTrap a("Hero");
    ScavTrap b("Villain");

    a.attack("HHHHHHH");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    b.attack("Hero");
    a.beRepaired(10);
    a.beRepaired(10);
    b.guardGate();
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
}

