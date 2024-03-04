/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loops.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:04:03 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 15:14:15 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void Log(const char* message) {
	std::cout << message << std::endl;
}


int main()
{
	for (int i = 0; i < 5; i++) {
		Log("Hello Wolrd!");
	}
	int i = 0;
	
	while (i < 5)
	{
		Log("Hello Wolrd!");
		i++;	
	}
}