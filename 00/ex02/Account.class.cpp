#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}
Account::Account()
{
}
int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;
int Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit )
{
	Account::_displayTimestamp();
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_accountIndex = Account::_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

void Account::_displayTimestamp()
{
	time_t		now = time(0);
	struct tm	tstruct;
	char		buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "[%Y%m%d_%OH%OM%OS] ", &tstruct);
	std::cout << buf;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << (this->_amount + deposit) <<";nb_deposit:"<< ++this->_nbDeposits << "\n";
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount ;
	if (this->_amount < withdrawal){
		std::cout << ";withdrawal:refused\n";
		return(false);}
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << (this->_amount - withdrawal) <<";nb_withdrawals:"<< ++this->_nbWithdrawals << "\n";
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	return (true);
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() <<";withdrawals:" << Account::getNbWithdrawals() << "\n";
}
void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits <<";withdrawals:" << this->_nbWithdrawals << "\n";
}