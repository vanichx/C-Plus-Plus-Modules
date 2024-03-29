/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:41:21 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/01/10 16:36:26 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"
#include "../inc/Phonebook.hpp"

int main()
{
	std::string command;
	PhoneBook Book;
	
	while (42)
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter a command " << GREEN << "(ADD, SEARCH, EXIT):"  RESET;
		if (!std::getline(std::cin, command))
			break;
		if (command.empty())
			continue;
		if (!command.compare("ADD")) {
			Book.addContact();
		} else if (!command.compare("SEARCH")) {
			Book.searchContact();
		} else if (!command.compare("EXIT")) {
			std::cout << RED << "Exiting the program. Contacts are lost forever!" << RESET;
			std::cout << std::endl;
			break;
		} else {
			std::cout << YELLOW << "Invalid command. Please enter ADD, SEARCH, or EXIT." << RESET;
			std::cout << std::endl;
		}
		command.clear();
	}
	return (EXIT_SUCCESS);
}
