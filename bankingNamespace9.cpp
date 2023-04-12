//bankingNamespace9.cpp
#include <iostream>
#include <iostream>

using namespace std;

namespace BuyAndSell
{
	double originalPrice;
	double taxRate;
	double taxAmount;
	double discount;
	double discountAmount;
	double netPrice;
	namespace ItemID
	{
	long itemNumber;

	namespace DateSold
		{
		int month;
		int day;
		int year;
		}
	}
}
int main()
{
	using namespace BuyAndSell;
	using namespace BuyAndSell::ItemID;
	using namespace BuyAndSell::ItemID::DateSold;

	originalPrice = 780.50;
	taxRate = 7.55;
	discount = 25; // %
	itemNumber = 641238;

	taxAmount = originalPrice * taxRate / 100;
	discountAmount = originalPrice * discount / 100;
	netPrice = originalPrice + taxAmount - discountAmount;

               month = 10;
	day = 18;
	year = 2002;

	cout << "Buy and Sell - Receipt";
	cout << "\nReceipt Date: " << month << "/" << day << "/" << year;
	cout << "\nItem Nunmber: " << itemNumber;
	cout << "\nDiscount Category: " << qualifyForDiscount;
	cout << "\nOriginal Price: $" << originalPrice;
	cout << "\nDiscount: $" << discountAmount;
	cout << "\nTax Rate: " << taxRate;
	cout << "\nTax Amount $" << taxAmount;
	cout << "\nNet Price: $" << netPrice << "\n\n";
	return 0;
}

