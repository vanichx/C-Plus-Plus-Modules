/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:33:58 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 12:10:01 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	// {
	// 	Weapon myTest = Weapon("M416");
	// 	HumanA mor("Morpheus", myTest);
	// 	mor.attack();
	// 	myTest.setType("G36");
	// 	mor.attack();
	// }
	// {
	// 	Weapon myTest2 = Weapon("M16A4");
	// 	HumanB agsm("Agent Smith");
	// 	agsm.setWeapon(NULL);
	// 	agsm.attack();
	// 	agsm.setWeapon(NULL);
	// 	agsm.attack();
	// }
	return (0);
}
