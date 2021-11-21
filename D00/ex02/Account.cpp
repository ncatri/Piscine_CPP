#include "Account.hpp"

Account::Account( int initial_deposit) {

	this->_amount  = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = this->getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
		<< "amount:" << this->_amount << ';'
		<< "created" << std::endl;
	Account::_nbAccounts++;
	return ;
}

Account::~Account( void ) {

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
		<< "amount:" << this->_amount << ';'
		<< "closed" << std::endl;
	Account::_nbAccounts--;
	return ;
}

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {

	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';'
		<< "total:" << Account::getTotalAmount() << ';'
		<< "deposits:" << Account::getNbDeposits() << ';'
		<< "withdrawals:" << Account::getNbWithdrawals() 
		<< std::endl;
}

void	Account::makeDeposit( int deposit ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
		<< "p_amount:" << this->_amount << ';';

	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;

	std::cout << "deposit:" << deposit << ';'
		<< "amount:" << this->_amount << ';'
		<< "nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal ) {

	bool	ret_val = true;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
		<< "p_amount:" << this->_amount << ';'
		<< "withdrawal:";

	if (this->_amount < withdrawal) {
		ret_val = false;
		std::cout << "refused" << std::endl;
	} else {
		std::cout << withdrawal << ';';
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ';'
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (ret_val);
}

int	Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
		<< "amount:" << this->_amount << ';'
		<< "deposits:" << this->_nbDeposits << ';'
		<< "withdrawals:" << this->_nbWithdrawals << std::endl; 
	return;
}

void	Account::_displayTimestamp( void ) {

# ifdef __linux
	time_t t = time(0);   // get time now
    tm *now = localtime(&t);
# else
	std::time_t t = std::time(0);   // get time now
    std::tm *now = std::localtime(&t);
# endif
    std::cout << '[' << (now->tm_year + 1900) << (now->tm_mon + 1) <<  now->tm_mday 
		<< '_' << now->tm_hour << now->tm_min << now->tm_sec << "] ";
}


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
