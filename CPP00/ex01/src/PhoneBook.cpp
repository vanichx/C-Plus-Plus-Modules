/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:20:04 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/26 15:18:21 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Phonebook.hpp"

PhoneBook::PhoneBook() : m_numberOfContacts(0) {
m_numberOfContacts = 0;
}

PhoneBook::~PhoneBook() {
	// Destructor
}

void PhoneBook::noContacts() {
	std::cout << YELLOW << "Your contact's book is empty, add at least one contact!" << RESET;
	std::cout << std::endl;
}

bool isNumber(std::string number) {
	for(unsigned long i = 0; i < number.length(); i++)
	{
		if (!isdigit(number[i]))
			return false;
	}
	return (true);
}

bool onlySpace(const std::string& str) {
	for (size_t i = 0; i < str.length(); ++i) {
		if (!std::isspace(str[i]))
			return (true);
	}
	return (false);
}

void PhoneBook::addContact()
{
	if (m_numberOfContacts < 8)
		addContactLess8();
	else
		addContactMore8();
}

void PhoneBook::addContactLess8() {
	std::string name;
	std::string surname;
	std::string nickname;
	std::string number;
	std::string secret;

	printMsg("Enter contact Name: ");
	while(name.empty() || !onlySpace(name)) {
		std::getline(std::cin, name);
		if (!onlySpace(name)) {
			std::cout << YELLOW "Invalid input. Name cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Name: " RESET;
		}
	}
	printMsg("Enter contact Surname: ");
	while(surname.empty() || !onlySpace(surname)) {
		std::getline(std::cin, surname);
		if (!onlySpace(surname)) {
			std::cout << YELLOW "Invalid input. Surname cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Surname: " RESET;
		}
	}
	printMsg("Enter contact Nickname: ");
	while(nickname.empty() || !onlySpace(nickname)) {
		std::getline(std::cin, nickname);
		if (!onlySpace(nickname)) {
			std::cout << YELLOW "Invalid input. Nickname cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Nickname: " RESET;
		}
	}
	printMsg("Enter contact Number: ");
	while (number.empty() || !isNumber(number) || !onlySpace(number)) {
		std::getline(std::cin, number);
		if (!onlySpace(number) || !isNumber(number) || number.empty()) {
			std::cout << YELLOW "Invalid input. Number cannot (be empty / contain only spaces / be non-numeric) " RESET << std::endl;
			std::cout << GREEN "Enter contact Number: " RESET;
		}
	}
	printMsg("Enter contact Secret: ");
	while(secret.empty()) {
		std::getline(std::cin, secret);
		if (!onlySpace(secret)) {
			std::cout << YELLOW "Invalid input. Secret cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Secret: " RESET;
		}
	}

	Contact newContact(name, surname, nickname, number, secret);
	m_contacts[m_numberOfContacts] = newContact;
	m_numberOfContacts++;
}

void PhoneBook::addContactMore8() {
	std::string name;
	std::string surname;
	std::string nickname;
	std::string number;
	std::string secret;

	printMsg("Enter contact Name: ");
	while(name.empty() || !onlySpace(name)) {
		std::getline(std::cin, name);
		if (!onlySpace(name)) {
			std::cout << YELLOW "Invalid input. Name cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Name: " RESET;
		}
	}
	printMsg("Enter contact Surname: ");
	while(surname.empty() || !onlySpace(surname)) {
		std::getline(std::cin, surname);
		if (!onlySpace(surname)) {
			std::cout << YELLOW "Invalid input. Surname cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Surname: " RESET;
		}
	}
	printMsg("Enter contact Nickname: ");
	while(nickname.empty() || !onlySpace(nickname)) {
		std::getline(std::cin, nickname);
		if (!onlySpace(nickname)) {
			std::cout << YELLOW "Invalid input. Nickname cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Nickname: " RESET;
		}
	}
	printMsg("Enter contact Number: ");
	while (number.empty() || !isNumber(number) || !onlySpace(number)) {
		std::getline(std::cin, number);
		if (!onlySpace(number) || !isNumber(number) || number.empty()) {
			std::cout << YELLOW "Invalid input. Number cannot (be empty / contain only spaces / be non-numeric) " RESET << std::endl;
			std::cout << GREEN "Enter contact Number: " RESET;
		}
	}
	printMsg("Enter contact Secret: ");
	while(secret.empty()) {
		std::getline(std::cin, secret);
		if (!onlySpace(secret)) {
			std::cout << YELLOW "Invalid input. Secret cannot be empty or contain only spaces." RESET << std::endl;
			std::cout << GREEN "Enter contact Secret: " RESET;
		}
	}

	Contact newContact(name, surname, nickname, number, secret);
	m_contacts[oldestContactIndex] = newContact;
    oldestContactIndex = (oldestContactIndex + 1) % 8;
}


void PhoneBook::searchContact()
{
	std::string input;
	size_t contactIndex;
	
	while (input.empty())
	{
		std::cout << "Enter an index from" << YELLOW " 0 - 7 " RESET \
		<< "to see a specific contact info or " << GREEN "ALL " RESET \
		<< "to see all of them: ";
		std::getline(std::cin, input);
	}
	if (!input.compare("ALL")) {
		if (m_numberOfContacts == 0) {
			noContacts();
			return;
		}
		else {

			std::cout << std::endl << CYAN << "             YOUR PHONEBOOK             " << RESET << std::endl;
			m_contacts[0].printHeaderForContacts();
			for (size_t i = 0; i < m_numberOfContacts && i < 8; i++) {
				std::cout << "         " << i << "|";
				m_contacts[i].printSingleContactInfo();
			}
		}
	} else if (std::isdigit(input[0]) && input[0] >= '0' && input[0] <= '7') {
		std::stringstream(input) >> contactIndex;
		 
		if (contactIndex < m_numberOfContacts) {
			std::cout << std::endl << GREEN "          SINGLE CONTACT INFO           " RESET << std::endl;
			m_contacts[contactIndex].printSingleContact();
		} else {
			std::cout << YELLOW "Invalid index. Please enter a valid index from 0 to 7" RESET << std::endl;
		}
	}
}

void PhoneBook::printMsg(std::string Msg) {
	std::cout << RED << "----------------------------------------" << std::endl;
	std::cout << GREEN << Msg << RESET;
}

