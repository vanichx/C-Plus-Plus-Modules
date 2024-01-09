/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:39 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/09 15:19:28 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "Colors.h"

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(const std:: string &type);
		~Weapon();
	public:
		const std::string &getType();
		void  setType(const std::string type);
};

#endif

