#include "Money.h"

Money::Money(int dollars, int cents) 
    : dollars(dollars), cents(cents) 
    {}

Money::Money(int pennies)
    : Money{pennies / 100, pennies % 100}    
    {}

int Money::getDollars() const 
{
    return this->dollars;
}

int Money::getCents() const{
    return this->cents;
}

Money operator+(const Money &lhs, const Money &rhs)
{
    int pennies = lhs.cents + rhs.cents;
    int dollars = lhs.dollars + rhs.dollars + (pennies / 100);
    int cents = pennies % 100;

    return Money(dollars, cents);
}