/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:55:55 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/11 10:10:43 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl()
{	
}

Harl::~Harl()
{
}

void printHeader(std::string msg, std::string color) {
	std::cout << color << "--------------------------------------------------" R << std::endl;
	std::cout << (msg.size() > 16 ? "	" : "		");
	std::cout << BLD << msg << R << std::endl;
	std::cout << color << "--------------------------------------------------" R << std::endl;
}

void	Harl::debug(void) {
	printHeader("DEBUG MESSAGE", BL);
	std::cout << BL	"I love having extra bacon for my 7XL-double-cheese" << std::endl;
	std::cout <<	"-triple-pickle-special- ketchup burger. I really do!" R << std::endl;
}

void	Harl::info(void) {
	printHeader("INFO MESSAGE", M);
	std::cout <<  M	"I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout <<	"You did not put enough bacon in my burger!" << std::endl;
	std::cout <<	"If you did, I would not be asking for more!" R << std::endl;
}
void	Harl::warning(void) {
	printHeader("WARNING MESSAGE", Y);
	std::cout << Y	"I think I deserve to have some extra bacon for free." << std::endl;
	std::cout <<	"I have been coming for years whereas you started " << std::endl;
	std::cout <<	"working here since last month." R << std::endl;
}

void	Harl::error(void) {
	printHeader("ERROR MESSAGE", RD);
	std::cerr << RD "This is unacceptable!" << std::endl;
	std::cerr << "I want to speak to the manager now." R << std::endl;
}

void	Harl::exit(void) {
	std::cout << "Exiting program..." << std::endl;
		return;
}

void	Harl::complain( std::string level ) {
	
	void (Harl::*complainArray[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,	
		&Harl::exit
	};

	std::string complains[5] = {
		"debug",
		"info",
		"warning",
		"error",
		"exit"
	};
	
	for (int i = 0; i < 5; i++) {
		if (level.compare(complains[i]) == 0) {
			(this->*complainArray[i])();
			return ;
		}	
	}
}