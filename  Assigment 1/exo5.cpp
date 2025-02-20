#include <iostream>
using namespace std;
class account_584
{
public:
    double account_balance_584;

public:
    account_584(double paccount_balance_584)
    {
        account_balance_584 = paccount_balance_584;
    }
};


void deposit_money_584(account_584 &x_584, double transfer_amount_584)
{
    x_584.account_balance_584 = transfer_amount_584 + x_584.account_balance_584;
}


void withdraw_money_584(account_584 &x_584, double transfer_amount_584)
{
    if (x_584.account_balance_584 >= transfer_amount_584)
    {
        x_584.account_balance_584 -= transfer_amount_584;
    }
}

void check_account_584(account_584 x_584)
{
    cout << "the account balance is : " << x_584.account_balance_584 << endl;
};

int main()
{

    account_584 Moustapha_584(10000);
    cout<< "currently balance :";
    check_account_584(Moustapha_584);
    cout<<"\n";
    deposit_money_584(Moustapha_584, 5000);
    cout<< "balance after deposite money:";
    check_account_584(Moustapha_584);
    cout<<"\n";
    withdraw_money_584(Moustapha_584, 10000);
    cout<< "balance after transfere money:";
    check_account_584(Moustapha_584);
}