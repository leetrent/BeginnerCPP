#ifndef _MONEY_H
#define _MONEY_H

class Money
{
    private:
        int dollars;
        int cents;
    public:
        Money(int dollars, int cents);
        Money(int pennies);

        bool operator==(const Money &rhs) const;
        bool operator!=(const Money &rhs) const;
};
#endif