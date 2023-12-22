/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:27:29 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/22 17:58:09 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

void Contact::setContactInfo() {
	std::cout << "Enter the first name:" << std::endl;
	std::cin >> _firstName;
	std::cout << "Enter the last name:" << std::endl;
	std::cin >> _lastName;
	std::cout << "Enter the nickname:" << std::endl;
	std::cin >> _nickName;
	std::cout << "Enter the phone number:" << std::endl;
	std::cin >> _phoneNumber;
	std::cout << "Enter the darkest secret:" << std::endl;
	std::cin >> _darkestSecret;
}

void Contact::displayContactInfo() const {
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickName << std::endl;
    std::cout << "Phone Number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}

