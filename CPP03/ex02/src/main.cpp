/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:39:43 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/15 16:12:41 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FlagTrap.hpp"

int main ()
{
	ClapTrap a("Morpheus");
	ScavTrap b("Neo");
	FlagTrap c("Marius");
	

	c.highFivesGuys();
}