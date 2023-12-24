/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:20:04 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/24 22:20:31 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

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
	while(name.empty())
		std::getline(std::cin, name);
	printMsg("Enter contact Surname: ");
	while(surname.empty())
		std::getline(std::cin, surname);
	printMsg("Enter contact Nickname: ");
	while(nickname.empty())
		std::getline(std::cin, nickname);
	printMsg("Enter contact Number: ");
	while(number.empty())
		std::getline(std::cin, number);
	printMsg("Enter contact Secret: ");
	while(secret.empty())
		std::getline(std::cin, secret);

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
	while(name.empty())
		std::getline(std::cin, name);
	printMsg("Enter contact Surname: ");
	while(surname.empty())
		std::getline(std::cin, surname);
	printMsg("Enter contact Nickname: ");
	while(nickname.empty())
		std::getline(std::cin, nickname);
	printMsg("Enter contact Number: ");
	while(number.empty())
		std::getline(std::cin, number);
	printMsg("Enter contact Secret: ");
	while(secret.empty())
		std::getline(std::cin, secret);

	Contact newContact(name, surname, nickname, number, secret);
	for (size_t i = 0; i < 7; ++i) {
		m_contacts[i] = m_contacts[i + 1];
	}
	m_contacts[7] = newContact;
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
				std::cout << "     " << i << "    |";
				m_contacts[i].printSingleContactInfo();
			}
		}
	} else if (std::isdigit(input[0]) && input[0] >= '0' && input[0] <= '7') {
		contactIndex = std::stoi(input);
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

