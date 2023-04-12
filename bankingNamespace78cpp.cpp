//bankingNamespace8.cpp
#include <iostream>
using namespace std;

namespace InterestAndDiscount
{
	double principal;
	double rate;
	int #include <iostream>
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
	}
}

int main()
{
	BuyAndSell::originalPrice = 780.50;
	BuyAndSell::taxRate = 7.55;
	BuyAndSell::discount = 25; // %
	BuyAndSell::ItemID::itemNumber = 641238;

	BuyAndSell::taxAmount = BuyAndSell::originalPrice *  BuyAndSell::taxRate / 100;
	BuyAndSell::discountAmount = BuyAndSell::originalPrice *  BuyAndSell::discount / 100;
	BuyAndSell::netPrice = BuyAndSell::originalPrice + BuyAndSell::taxAmount BuyAndSell::discountAmount;

	cout << "Buy and Sell - Receipt";
	cout << "\nItem Nunmber: " << BuyAndSell::ItemID::itemNumber;
	cout << "\nOriginal Price: $" << BuyAndSell::originalPrice;
	cout << "\nDiscount: $" << BuyAndSell::discountAmount;
	cout << "\nTax Rate: " << BuyAndSell::taxRate;
	cout << "\nTax Amount $" << BuyAndSell::taxAmount;
	cout << "\nNet Price: $" << BuyAndSell::netPrice << "\n\n";
	return 0;
}



