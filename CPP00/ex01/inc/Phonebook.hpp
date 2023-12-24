/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:21:00 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/24 22:22:00 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <vector>
#include "Contact.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"


class PhoneBook {
	private:
		Contact m_contacts[8];
		size_t m_numberOfContacts;
	public:
		PhoneBook();
		~PhoneBook();
	public:
		void	addContact();
		void    addContactLess8();
		void    addContactMore8();
		void	searchContact();
	private:
		void    printMsg(std::string Msg);
		void    noContacts();
		
};

#endif