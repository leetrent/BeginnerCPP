#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_

#include "Account.h"

class CheckingAccount : public Account
{
private:
  static constexpr const char* default_name = "Unamed Checking Account";
  static constexpr const double default_balance = 0.0;
  static constexpr const double withdrawal_fee = 1.50;
public:
  CheckingAccount(std::string name = default_name, double balance = default_balance);
  ~CheckingAccount() = default;
  virtual bool deposit(double amount) override;
  virtual bool withdraw(double amount) override;
  virtual void print(std::ostream &os) const override;
};

#endif
