/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:46:28 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/09 15:24:38 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include "Colors.h"

class HumanA {
	private:
		std::string _name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapons);
		~HumanA();
	public:
		void attack(void);
};

#endif