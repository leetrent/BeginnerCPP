#include <iostream>
#include <vector>
#include "Account.h"
#include "TestUtil.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;
    
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

    ////////////////////////////////////////////
    // CheckingAccount
    ////////////////////////////////////////////
    vector<CheckingAccount> checkingAccounts;
    checkingAccounts.push_back(CheckingAccount{});
    checkingAccounts.push_back(CheckingAccount{"Kirk"});
    checkingAccounts.push_back(CheckingAccount{"Spock", 2000});
    checkingAccounts.push_back(CheckingAccount{"Bones", 5000});

    display(checkingAccounts);
    deposit(checkingAccounts, 1000);
    display(checkingAccounts);
    withdraw(checkingAccounts, 2000);

    ////////////////////////////////////////////
    // TrustAccount
    ////////////////////////////////////////////
    vector<TrustAccount> trustAccounts;
    trustAccounts.push_back(TrustAccount{});
    trustAccounts.push_back(TrustAccount{"Athos", 10000, 5.0});
    trustAccounts.push_back(TrustAccount{"Porthos", 20000, 4.0});
    trustAccounts.push_back(TrustAccount{"Aramis", 30000});

    display(trustAccounts);
    deposit(trustAccounts, 1000);
    display(trustAccounts);
    withdraw(trustAccounts, 3000);
    for (int ii = 1; ii <= 5; ii++)
    {
        withdraw(trustAccounts, 1000);
    }
    return 0;
}
