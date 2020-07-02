#include <iostream>
#include "AccountUtil.h"

////////////////////////////////////////////////////////////
// Display
////////////////////////////////////////////////////////////
void display(const std::vector<Account> &accounts)
{
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const Account &account : accounts)
    {
        std::cout << account << std::endl;
    }
}
void display(const std::vector<SavingsAccount> &accounts)
{
    std::cout << "\n=== SavingsAccount ==========================================" << std::endl;
    for (const SavingsAccount &account : accounts)
    {
        std::cout << account << std::endl;
    }
}

////////////////////////////////////////////////////////////
// Deposit
////////////////////////////////////////////////////////////
void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing into Accounts =================================" << std::endl;
    for (Account &account : accounts)
    {
        if (account.deposit(amount))
        {
            std::cout << "Deposit of " << amount << " into " << account << " was successfull." << std::endl;
        }
        else
        {
            std::cout << "Deposit of " << amount << " into " << account << " failed." << std::endl;
        }
    }
}
void deposit(std::vector<SavingsAccount> &accounts, double amount)
{
    std::cout << "\n=== Depositing into SavingsAccount =================================" << std::endl;
    for (SavingsAccount &account : accounts)
    {
        if (account.deposit(amount))
        {
            std::cout << "Deposit of " << amount << " into " << account << " was successfull." << std::endl;
        }
        else
        {
            std::cout << "Deposit of " << amount << " into " << account << " failed." << std::endl;
        }
    }
}
////////////////////////////////////////////////////////////
// Withdraw
////////////////////////////////////////////////////////////
void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Account ==============================" <<std::endl;
    for (Account &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << "Withdawal of " << amount << " from " << account << " was successfull." << std::endl;
        }
        else
        {
            std::cout << "Withdawal of " << amount << " from " << account << " failed." << std::endl;
        }
    }
}
void withdraw(std::vector<SavingsAccount> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing from SavingsAccount ==============================" <<std::endl;
    for (SavingsAccount &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << "Withdawal of " << amount << " from " << account << " was successfull." << std::endl;
        }
        else
        {
            std::cout << "Withdawal of " << amount << " from " << account << " failed." << std::endl;
        }
    }
}
