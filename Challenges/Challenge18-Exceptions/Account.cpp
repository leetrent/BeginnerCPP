#include "Account.h"

Account::Account(std::string n, double b)
    : name{n}, balance{b} {
        if (balance < 0.0 )
        {
            throw IllegalBalanceException();
        }
    }

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
    throw InsufficientFundsException();
}

void Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Account = {name: " << this->name << ", balance: " << this->balance << "}]";
}
