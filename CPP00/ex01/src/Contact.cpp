/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:27:29 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/26 15:10:10 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact() {
	// Constructor
}

Contact::Contact(const std::string firstName, const std::string surName, const std::string nickName, const std::string  phoneNumber, const std::string darkestSecret) : m_firstName(firstName), m_surName(surName), m_nickName(nickName), m_phoneNumber(phoneNumber), m_darkestSecret(darkestSecret)
{
}

Contact::~Contact() {
	// Destructor
}

void Contact::printSingleContact() {
	std::cout << CYAN "First Name:" RESET << m_firstName << std::endl;
	std::cout << CYAN "Last Name:" RESET << m_surName << std::endl;
	std::cout << CYAN "Nick Name:" RESET << m_nickName << std::endl;
	std::cout << CYAN "Phone Number:" RESET << m_phoneNumber << std::endl;
	std::cout << CYAN "Darkest Secret:" RESET << m_darkestSecret << std::endl;
	std::cout << std::endl;
}

void Contact::printHeaderForContacts() {
	std::cout << std::right;
	std::cout << std::setw(10) << "   Index  " << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|";
	std::cout << std::endl;
	std::cout << "............................................";
	std::cout << std::endl;
}

void Contact::printSingleContactInfo() {
	std::cout << std::right;
	if (m_firstName.length() > 10) {
		std::cout << std::setw(9) << m_firstName.substr(0, 9) << ".|";
	} else {
		std::cout << std::setw(10) <<  m_firstName << "|";
	}
	if (m_surName.length() > 10) {
		std::cout << std::setw(9) << m_surName.substr(0, 9) << ".|";
	} else {
		std::cout << std::setw(10) << m_surName << "|";
	}
	if (m_nickName.length() > 10) {
		std::cout << std::setw(9) << m_nickName.substr(0, 9) << ".|";
	} else {
		std::cout << std::setw(10) << m_nickName << "|";
	}
	std::cout << std::endl;
}

