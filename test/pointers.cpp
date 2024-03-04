/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:45:13 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 16:26:29 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void Log(const char* message) {
	std::cout << message << std::endl;
}


int main()
{
	int var = 8;
	int* ptr = &var;

	std::cout << ptr << std::endl;

	
}