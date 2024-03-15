/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:39:43 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/15 16:12:12 by ipetruni         ###   ########.fr       */
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