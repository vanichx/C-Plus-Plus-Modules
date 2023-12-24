/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:42:21 by ivanpetruni       #+#    #+#             */
/*   Updated: 2023/12/24 22:21:05 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

class Contact {
	
	private:
		std::string m_firstName;
		std::string m_surName;
		std::string m_nickName;
		std::string m_phoneNumber;
		std::string m_darkestSecret;
	
	public:
		Contact();
		Contact(const std::string m_firstName, const std::string m_surName, const std::string m_nickName, const std::string m_phoneNumber, const std::string m_darkestSecret);
		~Contact();
	public:
		void printHeaderForContacts();
		void printSingleContactInfo();
		void printSingleContact();
};

#endif