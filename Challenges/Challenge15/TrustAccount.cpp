#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double interestRate)
    : SavingsAccount{name, balance, interestRate}, numberOfWithdrawals{0} {}

///////////////////////////////////////////////////////////
// OVERRIDE:
///////////////////////////////////////////////////////////
// Deposits of $5000.00 or more will receive a $50 bonus
// This bonus will be depoisted into account
//////////////////////////////////////////////////////////
bool TrustAccount::deposit(double amount)
{
    if (amount >= bonus_threshold)
    {
        amount += bonus_amount;
    }
    return SavingsAccount::deposit(amount);
}

///////////////////////////////////////////////////////////
// OVERRIDE:
///////////////////////////////////////////////////////////
// Only 3 withdrawals per year are permitted
// Each withrawal cannot exceed 20% of the account balance
//////////////////////////////////////////////////////////
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

std::ostream &operator<<(std::ostream &os, const TrustAccount &account)
{
    os  << "TrustAccount = {name: " << account.name
        << ", balance: " << account.balance
        << ", interestRate: " << account.interestRate << "%, "
        << "withdrawals: " << account.numberOfWithdrawals << "}";
    return os;
}
