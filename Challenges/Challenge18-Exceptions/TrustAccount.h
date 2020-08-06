#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_
#include "SavingsAccount.h"

class TrustAccount : public SavingsAccount
{
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);
    private:
        static constexpr const char     *default_name           = "Unnamed Trust Account";
        static constexpr const double   default_balance         = 0.0;
        static constexpr const double   default_interest_rate   = 0.0;
        static constexpr const double   bonus_amount            = 50.0;
        static constexpr const double   bonus_threshold         = 5000.0;
        static constexpr const int      max_withdrawals         = 3;
        static constexpr const double   max_withdraw_percent    = 0.2;
    protected:
        int numberOfWithdrawals;
    public:
        TrustAccount(std::string name = default_name, double balance = default_balance, double interestRate = default_interest_rate);
        ~TrustAccount() = default;
        virtual bool deposit(double amount) override;
        virtual bool withdraw(double amount) override;
        virtual void print(std::ostream &os) const override;
};

#endif
