#include "Money.h"
#include <iostream>
using namespace std;

Money::Money(int dollars, int cents) : dollars(dollars), cents(cents)
{
    cout << "--------------------------------------------------"    << endl;
    std::cout << "{dollars: " << dollars << ", cents: " << cents << "}" << std::endl;
}

Money::Money(int pennies) : Money{pennies/100, pennies%100}//: dollars{pennies/100}, cents{pennies%100}
{
    cout << "--------------------------------------------------"    << endl;
    std::cout << "(pennies): " << pennies << "{dollars: " << dollars << ", cents: " << cents << "}" << std::endl;
}

 bool Money::operator==(const Money &rhs) const
 {
     return (this->dollars == rhs.dollars && this->cents == rhs.cents);
 }

bool Money::operator!=(const Money &rhs) const
{
     return (this->dollars != rhs.dollars || this->cents != rhs.cents);
}