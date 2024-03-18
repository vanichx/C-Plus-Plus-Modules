/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtualfuncandpolymorphism.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:19:30 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 13:42:59 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;


class Weapon 
{
	public:
		virtual void Shoot() = 0;
};


class Gun : public Weapon
{
	public:
		virtual void Shoot() override
		{
			cout << "Bang !!!" << endl;
		}
};


class SubmachineGun : public Gun
{
	public:
		void Shoot() override
		{
			cout << "Bang bang bang !!!" << endl;
		}
};


class Bazooka : public Weapon
{
	public:
		void Shoot() override
		{
			cout << "Badaboom!!" << endl;
		}
};


class Knife : public Weapon 
{
	public:
		void Shoot() override
		{
			cout << "VJUH!!!" << endl;
		}
};

class Player 
{
	public:
		void Shoot(Weapon *weapon)
		{
			weapon->Shoot();
		}	
};



int main()
{
	Bazooka bazooka;
	Knife knife;
	Player player;
	
	// player.Shoot(&bazooka);
	player.Shoot(&knife);
}