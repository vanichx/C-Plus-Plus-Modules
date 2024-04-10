/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:05:14 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/10 16:45:04 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"
#include "../inc/Array.tpp"

int main()
{
	// int * a = new int();
	// std::cout << *a << std::endl;

	Array<int> *hi = new Array<int>(5);

	
	std::cout << &hi << std::endl;
	// std::cout << (*hi)[0] << std::endl;

}