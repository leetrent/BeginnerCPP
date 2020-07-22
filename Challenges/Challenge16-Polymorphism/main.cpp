#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "TestUtil.h"

using namespace std;

int main()
{
    // CheckingAccount ca;
    // cout << ca << endl;

    // SavingsAccount sa {"Frank", 5000, 2.6};
    // cout << sa << endl;
    // sa.deposit(10000);
    // cout << sa << endl;
    // sa.withdraw(10000);
    // cout << sa << endl;

    // Account *ptr = new TrustAccount("Leo", 10000, 2.6);
    // cout <<  ptr << endl;
    // cout << *ptr << endl;

    CheckingAccount frank {"Frank", 5000};
    cout << frank << endl;

    Account *trust = new TrustAccount("James");
    cout << *trust << endl;

    Account *p1 = new CheckingAccount("Larry", 10000);
    Account *p2 = new SavingsAccount("Moe", 1000);
    Account *p3 = new TrustAccount("Curly");

    std::vector<Account *> accounts {p1,p2,p3};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
