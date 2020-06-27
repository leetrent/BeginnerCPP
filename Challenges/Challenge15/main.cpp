#include <iostream>
#include <vector>
#include "Account.h"
#include "AccountUtil.h"

using namespace std;

// void display(const std::vector<Account> &accounts)
// {
//     std::cout << "\n=== Accounts ==========================================" << std::endl;
//     for (const Account &account : accounts)
//     {
//         std::cout << account << std::endl;
//     }
//
// }
// void deposit(std::vector<Account> &accounts, double amount)
// {
//     std::cout << "\n=== Depositing into Accounts =================================" << std::endl;
//     for (Account &account : accounts)
//     {
//         if (account.deposit(amount))
//         {
//             std::cout << "Deposit of " << amount << " into " << account << " was successfull." << std::endl;
//         }
//         else
//         {
//             std::cout << "Deposit of " << amount << " into " << account << " failed." << std::endl;
//         }
//     }
// }
// void withdraw(std::vector<Account> &accounts, double amount)
// {
//     std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
//     for (Account &account : accounts)
//     {
//         if (account.withdraw(amount))
//         {
//             std::cout << "Withdawal of " << amount << " from " << account << " was successfull." << std::endl;
//         }
//         else
//         {
//             std::cout << "Withdawal of " << amount << " from " << account << " failed." << std::endl;
//         }
//     }
// }

int main()
{
    // Account a1;
    // a1.deposit(100);
    // a1.withdraw(50);
    // std::cout << a1.getBalance() << std::endl;

    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    display(accounts);
    withdraw(accounts, 2000);
    display(accounts);

    return 0;
}
