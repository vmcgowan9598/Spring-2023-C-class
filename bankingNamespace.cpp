//bankingNamespace.cpp
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
	InterestAndDiscount::principal = 3250;   //scope access operator
	InterestAndDiscount::rate = 0.1225; // =12.25%
	InterestAndDiscount::periods = 2;

	cout << "Loan Processing";
	cout << "\nPrincipal: $" << InterestAndDiscount::principal;
	cout << "\nRate:         " << InterestAndDiscount::rate*100 << "%";
	cout << "\nTime:    " << InterestAndDiscount::periods << " years" << endl;
	return 0;
}

