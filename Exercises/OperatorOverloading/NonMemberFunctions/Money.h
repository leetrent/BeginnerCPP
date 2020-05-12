#ifndef _MONEY_H
#define _MONEY_H

class Money
{
    friend Money operator+(const Money &lhs, const Money &rhs);
    private:
        int dollars;
        int cents;
    public:
        Money(int dollars, int cents);
        Money(int pennies);
        int getDollars() const;
        int getCents()  const;
};
#endif