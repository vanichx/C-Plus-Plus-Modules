/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditionsandpranches.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:23:57 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 15:01:21 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void Log(const char* message) {
	std::cout << message << std::endl;
}

int main()
{
	int x = 5;
	const char* ptr = "Hello";

	if(ptr)
		Log(ptr);
	else if (ptr == "Hello")
		Log("ptr is Hello");
	else
		Log("ptr is null");
}