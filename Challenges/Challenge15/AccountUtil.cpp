#include <iostream>
#include "AccountUtil.h"

void display(const std::vector<Account> &accounts)
{
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const Account &account : accounts)
    {
        std::cout << account << std::endl;
    }

}

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

void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
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
