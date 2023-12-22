/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:21:00 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/22 18:10:44 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		size_t numberOfContacts;
		size_t oldestContactIndex;
	public:
		PhoneBook();
		void addContact(const Contact& contact);
		void displayContacts() const;
		void searchContact() const;
};

#endif