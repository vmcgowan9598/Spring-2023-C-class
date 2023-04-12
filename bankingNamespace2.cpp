//bankingNamespace2.cpp
#include <iostream>
using namespace std;

namespace InterestAndDiscount
{
	double principal;
	double rate;
	int periods;
}

int main()
{
	cout << "Interest and Discount\n";
	cout << "Principal: $";
	cin >> InterestAndDiscount::principal;
	cout << "Rate (example 8.75): ";
	cin >> InterestAndDiscount::rate;
	cout << "Number of Years: ";
	cin >> InterestAndDiscount::periods;

	cout << "\nLoan Processing";
	cout << "\nPrincipal: $" << InterestAndDiscount::principal;
	cout << "\nRate:         " << InterestAndDiscount::rate << "%";
	cout << "\nPeriods:    " << InterestAndDiscount::periods << " years" << endl;
	return 0;
}


