#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	Account::_nbAccounts += 1;
	this->_accountIndex = Account::_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ";" << "closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';'
	<< "total:" << getTotalAmount() << ';'
	<< "deposits:" << getNbDeposits() << ';'
	<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';' \
	<< "p_amount:" << this->_amount - deposit << ';' \
	<< "deposit:" << deposit << ";" \
	<< "amount:" << this->_amount << ";" \
	<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	bool check;

	(this->_amount - withdrawal < 0) ? check = false : check = true;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';' \
	<< "p_amount:" << this->_amount << ';';
	if(check == false)
		std::cout << "withdrawal:refused" << std::endl;
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << "withdrawal:" << withdrawal << ";" \
		<< "amount:" << this->_amount << ";" \
		<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return check;
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ';'
	<< "deposits:" << this->_nbDeposits << ';'
	<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t time;
	std::time(&time);
	std::tm *localTime;

	localTime = std::localtime(&time);
	std::cout	<< '[' \
				<< (localTime->tm_year + 1900);
				(localTime->tm_mon + 1 < 10) ? (std::cout << "0" << (localTime->tm_mon + 1)) : (std::cout << (localTime->tm_mon + 1));
				(localTime->tm_mday < 10) ? (std::cout << "0" << (localTime->tm_mday)) : (std::cout << (localTime->tm_mday + 1));
				std::cout << "_" \
				<< localTime->tm_hour \
				<< localTime->tm_min \
				<< localTime->tm_sec \
				<< "] ";
}
