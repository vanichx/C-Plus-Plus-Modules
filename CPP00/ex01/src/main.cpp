/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:41:21 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/22 17:27:17 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Phonebook.hpp>

int main()
{
	std::string command;
	Phonebook

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

		if (command == "ADD") {
			
		} else if (command == "SEARCH") {
			
		} else if (command == "EXIT") {
			std::cout << "Exiting the program. Contacts are lost forever!";
			std::cout << std::endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}