//bankingNamespace3.cpp
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
	double interest;
	double maturityValue;

	cout << "Interest and Discount\n";
	cout << "Principal: $";
	cin >> InterestAndDiscount::principal;
	cout << "Rate (example 8.75): ";
	cin >> InterestAndDiscount::rate;
              cout << "Number of Years: ";
	cin >> InterestAndDiscount::periods;

              interest = InterestAndDiscount::principal *(InterestAndDiscount::rate/100) *
			   InterestAndDiscount::periods;
	maturityValue = InterestAndDiscount::principal + interest;

	cout << "\nLoan Processing";
	cout << "\nPrincipal: $" << InterestAndDiscount::principal;
	cout << "\nRate:         " << InterestAndDiscount::rate << "%";
	cout << "\nPeriods:    " << InterestAndDiscount::periods << " years";
	cout << "\nInterest: $" << interest;
	cout << "\nMaturity Value: $" << maturityValue << "\n\n";
	return 0;
}



