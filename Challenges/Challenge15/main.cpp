#include <iostream>
#include <vector>
#include "Account.h"
#include "TestUtil.h"

using namespace std;

int main()
{
    ////////////////////////////////////////////
    // Account
    ////////////////////////////////////////////
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    display(accounts);
    withdraw(accounts, 2000);

    ////////////////////////////////////////////
    // SavingsAccount
    ////////////////////////////////////////////
    vector<SavingsAccount> savingsAccounts;
    savingsAccounts.push_back(SavingsAccount{});
    savingsAccounts.push_back(SavingsAccount{"Superman"});
    savingsAccounts.push_back(SavingsAccount{"Batman", 2000});
    savingsAccounts.push_back(SavingsAccount {"Wonder Woman", 5000, 5.0});

    display(savingsAccounts);
    deposit(savingsAccounts, 1000);
    display(savingsAccounts);
    withdraw(savingsAccounts, 2000);

    return 0;
}
