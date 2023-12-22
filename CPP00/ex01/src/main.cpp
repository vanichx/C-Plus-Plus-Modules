/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:41:21 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/22 17:54:05 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook Book;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

		if (command == "ADD") {
            Contact newContact;
			Book.addContact(newContact);
		} else if (command == "SEARCH") {
			
		} else if (command == "EXIT") {
			std::cout << "Exiting the program. Contacts are lost forever!";
			std::cout << std::endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}