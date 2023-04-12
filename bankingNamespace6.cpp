//bankingNamespace6.cpp
#include <iostream>
using namespace std;

namespace InterestAndDiscount
{
	double principal;
	double rate;
	int        periods;
	double interest;
	double discount;
	double maturityValue;
}

namespace BuyAndSell
{
	double originalPrice;
	double taxRate;
	double taxAmount;
	double discount;
	double discountAmount;
	double netPrice;
}

int main()
{
	{
	using namespace InterestAndDiscount;
	principal = 12500; // $
	rate = 8.25; // %
	periods = 5; // Years

	discount = rate / 100;
	interest = principal * discount * periods;
	maturityValue = principal + interest;

	cout << "Interest Calculation";
	cout << "\nPrincipal:  $" << principal<< "\nRate:        " << rate << "%"
	        << "\nDiscount:  " << discount<< "\nPeriods:    " << periods << " years"
	        << "\nInterest: $" << interest << "\nMaturity Value: $" << maturityValue;
	}
	using namespace BuyAndSell;

	originalPrice = 250; // $

	taxRate = 16.00; // %
	discount = 20.00; // %

	taxAmount = originalPrice * taxRate / 100;
	discountAmount = originalPrice * discount / 100;
	netPrice = originalPrice + taxAmount - discountAmount;

	cout << "\n\nBuy and Sell - Receipt";
	cout << "\nOriginal Price: $" << originalPrice
	 << "\nDiscount: $" << discountAmount
		 << "\nTax Rate: " << taxRate
		 << "\nTax Amount: $" << taxAmount
		 << "\nNet Price: $" << netPrice << "\n\n";
	return 0;
}




