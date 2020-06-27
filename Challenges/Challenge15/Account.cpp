#include "Account.h"

Account::Account(std::string n, double b)
    : name{n}, balance{b} {}

bool Account::deposit(double amount)
{
    if (amount > 0)
    {
        this->balance += amount;
        return true;
    }
    return false;
}

bool Account::withdraw(double amount)
{
    if (this->balance - amount >= 0)
    {
        this->balance -= amount;
        return true;
    }
    return false;
}

double Account::getBalance() const
{
    return this->balance;
}


std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os << "[Account = {name: " << account.name << ", balance: " << account.balance << "}]";
    return os;
}
