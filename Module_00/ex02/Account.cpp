// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Olga "Catbender" Matskeivch <om@gbu.com>          //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructor /////////////////////////////////////////////////////////////////
Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << initial_deposit
			  << ";created\n";
}

// Destrcutor //////////////////////////////////////////////////////////////////
Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
void	Account::_displayTimestamp(void) {
	char	buffer[20];

	std::time_t now = std::time(NULL);
	std::tm *ltm = std::localtime(&now);

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", ltm);
	std::cout << buffer;
}

////////////////////////////////////////////////////////////////////////////////
void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";deposit:" << deposit
			  << ";amount:" << _amount + deposit
			  << "nb_deposits:" << _nbDeposits + 1
			  << std::endl;
	
	_amount += deposit;
	_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
}

////////////////////////////////////////////////////////////////////////////////
bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";withdrawls:";

	if (withdrawal > _amount) {
		std::cout << "refused";
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;

	std::cout << withdrawal
			  << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals
			  << std::endl;
	return true;
}

////////////////////////////////////////////////////////////////////////////////
// const means it is read only and will never change the value or a variable
int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
						  << ";amount:" << _amount
						  << ";deposits:" << _nbDeposits
						  << ";withdrawals:" << _nbWithdrawals
						  << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
int	Account::getNbAccounts( void ) { // how many accounts exist
	return (_nbAccounts);
}

////////////////////////////////////////////////////////////////////////////////
int	Account::getTotalAmount( void ) { // sum of all account balances
	return (_totalAmount);
}

////////////////////////////////////////////////////////////////////////////////
int	Account::getNbDeposits( void ) { // amount of deposits in total
	return (_totalNbDeposits);
}

////////////////////////////////////////////////////////////////////////////////
int	Account::getNbWithdrawals( void ) { // amount of withdrawls in total
	return (_totalNbWithdrawals);
}

////////////////////////////////////////////////////////////////////////////////
void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals()
			  << std::endl;
}

