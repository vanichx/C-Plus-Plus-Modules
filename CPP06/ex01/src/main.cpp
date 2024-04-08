/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:04:46 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 12:50:32 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

int main()
{
	Data *ptr = new Data;

	ptr->age = 28;
	ptr->name = "Erik";

	std::cout << "Value of age : " RD BLD << ptr->age << R " Value of name : " Y BLD << ptr->name << R << std::endl;

	uintptr_t firstStage = Serializer::serialize(ptr);
	
	Data* secondStage = Serializer::deserialize(firstStage);
	
	std::cout << "Value of age : " RD BLD << secondStage->age << R " Value of name : " Y BLD << secondStage->name << R << std::endl;

	delete ptr;
}