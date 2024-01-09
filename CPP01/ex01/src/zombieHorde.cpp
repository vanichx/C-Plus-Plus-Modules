/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:12:34 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/08 16:26:30 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name) {
	
	Zombie *heapZombie = new Zombie[N];

	for (int i = 0; i < N; i++) {
		heapZombie[i].nameZombie(name);
		std::cout << i + 1 << ".";
		heapZombie[i].announce();
	}
	std::cout << std::endl;
	return (heapZombie);
}