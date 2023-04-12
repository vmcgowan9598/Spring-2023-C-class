//bankingNamespace4.cpp
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
	using namespace InterestAndDiscount;

	double interest;
	double maturityValue;

	cout << "Interest and Discount\n";
	cout << "Principal: $";
	cin >> principal;
              cout << "Rate (example 8.75): ";
	cin >> rate;
              cout << "Number of Years: ";
	cin >> periods;

	interest = principal * (rate/100) * periods;
	maturityValue = principal + interest;
	cout << "\nLoan Processing";
	cout << "\nPrincipal: $" << principal;
	cout << "\nRate:         " << rate << "%";
	cout << "\nPeriods:    " << periods << " years";
	cout << "\nInterest: $" << interest;
	cout << "\nMaturity Value: $" << maturityValue << "\n\n";
	return 0;
}



