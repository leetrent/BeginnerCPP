#include "SavingsAccount.h"

int main()
{
    SavingsAccount sa;
    std::cout << sa << std::endl;

    SavingsAccount casey("Casey", 100000, 5.0);
    casey.deposit(100000);
    casey.withdraw(50000);
    std::cout << casey << std::endl;

    return 0;
}
