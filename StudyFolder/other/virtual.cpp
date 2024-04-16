/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:53:50 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 13:17:03 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;





class Gun
{
	public:
		virtual void Shoot()
		{
			cout << "Bang!" << endl;
		}
};


class SubmachineGun : public Gun
{
	public:
		void Shoot() override
		{
			cout << "Bang bang bang !!" << endl;
		}
};


class Bazooka : public Gun
{
	public:
		void Shoot() override
		{
			cout << "Badaboom!!" << endl;
		}
};


class Player 
{
	public:
		void Shoot(Gun *gun)
		{
			gun->Shoot();
		}	
};

int main()
{
	Gun gun;
	SubmachineGun machinegun;
	Bazooka bazoka;

	Player player;


	player.Shoot(&gun);
	player.Shoot(&machinegun);
	player.Shoot(&bazoka);


	return (0);
}