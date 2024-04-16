/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASCII.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:35:10 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 14:52:30 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

using namespace std;


int main()
{

	// std::cout << sizeof(char) << endl;
	
	for (int i = 0; i < 255; i++)
	{
		std::cout << i << "  i = " << (char)i << std::endl;
	}
	return (0);
}