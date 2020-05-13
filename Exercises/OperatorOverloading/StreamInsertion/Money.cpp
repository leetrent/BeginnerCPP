#include "Money.h"

// Money::Money(int dollars, int cents)
//     :dollars{dollars}, cents{cents}
//     {}

// Money::Money(int pennies)
//     :dollars{pennies / 100}, cents{pennies % 100}
//     {}

Money::Money(int dollars, int cents)
    :dollars(dollars), cents(cents)
    {}

Money::Money(int pennies)
    :dollars(pennies / 100), cents(pennies % 100)
    {}

std::ostream &operator<<(std::ostream &out, const Money &rhs)
{
    out << "dollars: " << rhs.dollars << " cents: " << rhs.cents;
    return out;
}