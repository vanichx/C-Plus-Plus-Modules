/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flow.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:16:39 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 15:25:34 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void Log(const char* message) {
	std::cout << message << std::endl;
}


int main()
{
	for (int i = 0; i < 5; i++)
	{
		if ((i + 1) % 2 == 0)
			return (0);
		Log("Hello Wolrd!");
		std::cout << i << std::endl;
	}
}