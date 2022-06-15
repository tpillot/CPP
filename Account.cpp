#include "Account.hpp"

Account::Account( int initial_deposit ) {

}

int     Account::getNbAccounts( void ) {

}

int     Account::getTotalAmount( void ) {

}

int     Account::getNbDeposits( void ) {

}

int     Account::getNbWithdrawals( void ) {

}

void    Account::displayAccountsInfos( void ) {

}

void    Account::makeDeposit( int deposit ) (

)

bool    Account::makeWithdrawal( int withdrawal ) {

}

int     Account::checkAmount( void ) const {

}

void    Account::displayStatus( void ) const {

}

void    Account::_displayTimestamp( void ) {

}

static int      Account::_totalNbWithdrawals = 0;
static int      Account::_nbAccounts = 0;
static int      Account::_totalAmount = 0;
static int      Account::_totalNbDeposits = 0;