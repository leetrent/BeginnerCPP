#ifndef _TESTUTIL_H_
#define _TESTUTIL_H_

#include <vector>
#include "Account.h"

void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);

#endif
