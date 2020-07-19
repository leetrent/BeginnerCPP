#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include "Account.h"

class SavingsAccount : public Account
{
  private:
    static constexpr const char *default_name = "Unamed Savings Account";
    static constexpr const double default_balance = 0.0;
    static constexpr const double default_interest_rate = 0.0;
  protected:
    double interestRate;
  public:
    SavingsAccount(std::string name = default_name, double balance = default_balance, double interestRate = default_interest_rate);
    virtual ~SavingsAccount() = default;
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
};
#endif
