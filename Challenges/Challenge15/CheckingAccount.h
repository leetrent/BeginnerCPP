#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_

#include "Account.h"

class CheckingAccount : public Account
{
  friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &checkingAccount);
private:
  static constexpr const char* default_name = "Unamed Checking Account";
  static constexpr const double default_balance = 0.0;
  static constexpr const double withdrawal_fee = 1.50;
public:
  CheckingAccount(std::string name = default_name, double balance = default_balance);
  bool withdraw(double);
};

#endif
