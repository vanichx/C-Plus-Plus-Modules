/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:20:04 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/22 18:11:52 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook() : numberOfContacts(0) {}

void PhoneBook::addContact(const Contact& contact) {
    if (numberOfContacts < 8) {
        contacts[numberOfContacts++] = contact;
    } else {
        contacts[oldestContactIndex] = contact;
        oldestContactIndex = (oldestContactIndex + 1) % 8;
    }
}
