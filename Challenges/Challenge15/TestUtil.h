#ifndef _TESTUTIL_H_
#define _TESTUTIL_H_

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

////////////////////////////////////////////////////////////
// Account
////////////////////////////////////////////////////////////
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

////////////////////////////////////////////////////////////
// SavingsAccount
////////////////////////////////////////////////////////////
void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts, double amount);
void withdraw(std::vector<SavingsAccount> &accounts, double amount);

////////////////////////////////////////////////////////////
// CheckingAccount
////////////////////////////////////////////////////////////
void display(const std::vector<CheckingAccount> &accounts);
void deposit(std::vector<CheckingAccount> &accounts, double amount);
void withdraw(std::vector<CheckingAccount> &accounts, double amount);



#endif
