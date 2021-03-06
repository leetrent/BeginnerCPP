#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double interestRate)
  : Account{name, balance}, interestRate{interestRate} {}

bool SavingsAccount::deposit(double amount)
{
  amount += amount * (this->interestRate / 100);
  return Account::deposit(amount);
}

bool SavingsAccount::withdraw(double amount)
{
    return Account::withdraw(amount);
}

void SavingsAccount::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "SavingsAccount = {name: " << this->name << ", balance: " << this->balance << ", interestRate: " << this->interestRate << "%}";
}
