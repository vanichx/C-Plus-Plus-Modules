/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:10:41 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/08 16:37:02 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void){

	Zombie *allocZombs;
	
	allocZombs = zombieHorde(9, "Jack");
	delete[] allocZombs;
	return (0);
}