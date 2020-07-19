#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(std::string name, double balance)
  : Account{name, balance} {};

bool CheckingAccount::withdraw(double amount)
{
  return Account::withdraw(amount + withdrawal_fee);
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &account)
{
  os << "[CheckingAccount = {name: " << account.name << ", balance: " << account.balance << "}]";
  return os;
}
