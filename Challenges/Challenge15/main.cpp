#include "Account.h"
#include <iostream>

int main()
{
    Account a1;
    a1.deposit(100);
    a1.withdraw(50);
    std::cout << a1.getBalance() << std::endl;
    return 0;
}
