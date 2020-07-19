#include <iostream>
#include "TestUtil.h"

////////////////////////////////////////////////////////////
// Display
////////////////////////////////////////////////////////////
void display(const std::vector<Account*> &accounts)
{
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &account : accounts)
    {
        std::cout << *account << std::endl;
    }
}

////////////////////////////////////////////////////////////
// Deposit
////////////////////////////////////////////////////////////
void deposit(std::vector<Account*> &accounts, double amount)
{
    std::cout << "\n=== Depositing into Accounts =================================" << std::endl;
    for (auto &account : accounts)
    {
        if (account->deposit(amount))
        {
            std::cout << "[SUCCESS] => Deposit of " << amount << " into " << *account << " was successfull." << std::endl;
        }
        else
        {
            std::cout << "[FAILURE] => Deposit of " << amount << " into " << *account << " failed." << std::endl;
        }
    }
}

////////////////////////////////////////////////////////////
// Withdraw
////////////////////////////////////////////////////////////
void withdraw(std::vector<Account*> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Account ==============================" <<std::endl;
    for (auto &account : accounts)
    {
        if (account->withdraw(amount))
        {
            std::cout << "[SUCCESS] => Withdawal of " << amount << " from " << *account << " was successfull." << std::endl;
        }
        else
        {
            std::cout << "[FAILURE] => Withdawal of " << amount << " from " << *account << " failed." << std::endl;
        }
    }
}
