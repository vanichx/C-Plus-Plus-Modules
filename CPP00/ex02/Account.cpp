/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:34:48 by ipetruni          #+#    #+#             */
/*   Updated: 2023/12/25 16:13:52 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int Account::getTotalAmount(void) {
	return (_totalAmount);
}

int Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

Account::Account(int initial_deposit) {
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
}

Account::~Account(void) {
	_nbAccounts--;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << "amount:" << _amount
			  << ";closed" << std::endl;
}

void Account::_displayTimestamp(void) {
	std::time_t currentTime = std::time(nullptr);
	std::tm *localTime = std::localtime(&currentTime);
	std::cout << '[' 
			  << std::setw(4) << std::setfill('0') << (localTime->tm_year + 1900)
			  << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
			  << std::setw(2) << std::setfill('0') << localTime->tm_mday
			  << '_'
			  << std::setw(2) << std::setfill('0') << localTime->tm_hour
			  << std::setw(2) << std::setfill('0') << localTime->tm_min
			  << std::setw(2) << std::setfill('0') << localTime->tm_sec
			  << ']';
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();

	std::cout << " accounts:" << getNbAccounts() << ";"
				<< "amount:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << std::flush;
	_amount += deposit;
	std::cout << ";deposit:" << deposit
			  << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits
			  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";withdrawal:" << std::flush;
	if (withdrawal > checkAmount()) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << std::flush;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals
			  << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const {
	return (_amount);
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals
			  << std::endl;
}