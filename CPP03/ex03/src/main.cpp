/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:39:43 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/15 15:43:34 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main ()
{
	ClapTrap a;
	ScavTrap b("Neo");
	FlagTrap c("Marius");
	DiamondTrap d("Morpheus");
	
	c.highFivesGuys();
	d.whoAmI();
}