#include <iostream>
using namespace std;

struct CDAccount
{
       double balance;
       double interest_rate;
       int term;
       };
int main()
{
    CDAccount myaccount;
    cout<<"Enter account balance: $";
    cin>>myaccount.balance;
    cout<<"Enter account interest rate: ";
    cin>>myaccount.interest_rate;
    cout<<"Enter number of months until maturity: ";
    cin>>myaccount.term;
    double rate_fraction, interest;
    rate_fraction = myaccount.interest_rate/100.0;
    interest = myaccount.balance*rate_fraction*(myaccount.term/12.0);
    myaccount.balance = myaccount.balance +interest;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"When your CD matures in "<<myaccount.term<<" months, it will have a balance of $"<<myaccount.balance<<endl;
    system("PAUSE");
    return 0;
}
