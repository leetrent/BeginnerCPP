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

void Account::print(std::ostream &os) const
{
    os << "Account display";
}
