#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double interestRate)
    : SavingsAccount{name, balance, interestRate}, numberOfWithdrawals{0} {}

bool TrustAccount::deposit(double amount)
{
    if (amount >= bonus_threshold)
    {
        amount += bonus_amount;
    }
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount)
{
    if ( numberOfWithdrawals >= max_withdrawals
            || amount > (balance * max_withdraw_percent) )
    {
        return false;
    }
    else
    {
        numberOfWithdrawals++;
        return SavingsAccount::withdraw(amount);
    }
}

void TrustAccount::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os  << "TrustAccount = {name: " << this->name
        << ", balance: " << this->balance
        << ", interestRate: " << this->interestRate << "%, "
        << "withdrawals: " << this->numberOfWithdrawals << "}";
}
