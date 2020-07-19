#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double interestRate)
  : Account{name, balance}, interestRate{interestRate} {}

bool SavingsAccount::deposit(double amount)
{
  amount += amount * (this->interestRate / 100);
  return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &account)
{
  os << "SavingsAccount = {name: " << account.name << ", balance: " << account.balance << ", interestRate: " << account.interestRate << "%}";
  return os;
}
