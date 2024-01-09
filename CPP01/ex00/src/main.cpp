/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:10:41 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/08 15:43:52 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void){

	Zombie stackZomb("stackZomb");
	Zombie *heapZomb;

	stackZomb.announce();
	heapZomb = newZombie("heapZomb");
	heapZomb->announce();
	randomChump("randZomb");
	delete heapZomb;
	return (0);

}