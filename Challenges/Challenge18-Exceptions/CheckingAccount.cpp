#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance)
  : Account{name, balance} {};

bool CheckingAccount::deposit(double amount)
{
  return Account::deposit(amount);
}

bool CheckingAccount::withdraw(double amount)
{
  return Account::withdraw(amount + withdrawal_fee);
}

void CheckingAccount::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[CheckingAccount = {name: " << this->name << ", balance: " << this->balance << "}]";
}
