/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:41:28 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/24 17:53:19 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	
	std::string name = "Ivan";

	std::string surname = "Petrunin";
	name.append(" ");
	name.append(surname);
	std::cout << name << std::endl;
}