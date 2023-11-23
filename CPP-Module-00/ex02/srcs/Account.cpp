#include <vector>
#include <algorithm>
#include <functional>
#include "../include/Account.hpp"
#include <iostream>

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
	<< "amount:" << this->_amount << ';'
	<< "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ';'
	<< "closed" << std::endl;
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
	<< "deposit:" << getNbDeposits() << ';'
	<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if(this->_amount - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		return true;
	}
	return false;
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
	<< "withdrawals:" << this->_nbWithdrawals << ';' << std::endl;
}

void Account::_displayTimestamp(void)
{
	//incompleto , falta usar a funcao std::time
	std::cout << '[' << 0 << "] ";
}
