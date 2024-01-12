/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:39 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/12 09:29:50 by ipetruni         ###   ########.fr       */
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
		Weapon(std:: string type);
		~Weapon();
	public:
		std::string getType() const;
		void  setType(std::string type);
};

#endif

