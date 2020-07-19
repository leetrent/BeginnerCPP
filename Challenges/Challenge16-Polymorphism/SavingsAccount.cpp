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
    os << "SavingsAccount display";
}
