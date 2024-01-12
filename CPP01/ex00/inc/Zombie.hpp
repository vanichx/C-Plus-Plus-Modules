/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:10:39 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 16:30:25 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define R	"\033[0m"
#define RD	"\033[31m"
#define GR	"\033[32m"
#define Y	"\033[33m"
#define B	"\033[34m"
#define M	"\033[35m"
#define C	"\033[36m"

class Zombie {
private:
	std::string _name;
public:
	Zombie();
	Zombie(std::string _name);
	~Zombie();
public:
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif