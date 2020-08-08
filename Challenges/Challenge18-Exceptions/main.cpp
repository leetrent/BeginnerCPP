#include <iostream>
#include <memory>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "TestUtil.h"

using namespace std;

int main()
{
    std::unique_ptr<Account> larrys_account;
    try
    {
        larrys_account = std::make_unique<SavingsAccount>("Larry", -2000.0);
        std::cout << endl << *larrys_account << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << endl << ex.what() << std::endl;
    }

    unique_ptr<Account> moes_account;
    try
    {
        moes_account = make_unique<SavingsAccount>("Moe", 1000.0);
        cout << endl << *moes_account << endl;

        moes_account->withdraw(500.0);
        cout << endl << *moes_account << endl;

        moes_account->withdraw(1000.0);
        cout << endl << *moes_account << endl;
    }
    catch (const IllegalBalanceException &ibexc)
    {
        cerr << endl << ibexc.what() << endl;
    }
    catch (const InsufficientFundsException &ifexc)
    {
        cerr << endl << ifexc.what() << endl;
    }

    cout << endl << "Program completed successfully" << endl;
    return 0;
}
