/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:15:35 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/04 21:27:55 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Player 
{
	public:
		int x, y;
		int speed;
	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
	
};


int main()
{
	Player player;
	player.x = 5;
	player.y = 0;
	player.speed = 1;

	player.Move(10, 10);

	LOG(player.x);
	LOG(player.y);
} 