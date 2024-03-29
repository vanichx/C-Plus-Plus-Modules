/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:47:02 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 09:28:03 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include "Colors.h"

class HumanB {
	private:
		std::string _name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
	public:
		void attack();
		void setWeapon(Weapon &type);
		void setWeapon(Weapon *type);
};

#endif