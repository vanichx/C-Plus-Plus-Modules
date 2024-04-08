/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:04:46 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 12:13:52 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

int main()
{
	Data *ptr = new Data;

	std::cout << "Address value before : " << &ptr << std::endl;

	ptr->age = 28;
	ptr->name = "Erik";

	std::cout << "Value of age : " << ptr->age << " Value of name :" << ptr->name << std::endl;

	uintptr_t firststep = Serializer::serialize(ptr);
	
	Data* ptr2 = Serializer::deserialize(firststep);
	
	std::cout << "Value of age : " << ptr2->age << " Value of name :" << ptr2->name << std::endl;	
	
}