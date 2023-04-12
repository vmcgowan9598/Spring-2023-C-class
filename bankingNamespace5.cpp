//bankingNamespace5.cpp
namespace InterestAndDiscount

{
	double principal;
	double rate;
	int periods;
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
	InterestAndDiscount::principal = 12500; // $
	InterestAndDiscount::rate = 8.25; // %
	InterestAndDiscount::periods = 5; // Years
	InterestAndDiscount::discount = InterestAndDiscount::rate / 100;
	InterestAndDiscount::interest = InterestAndDiscount::principal *		InterestAndDiscount::discount *InterestAndDiscount::periods;
	InterestAndDiscount::maturityValue = InterestAndDiscount::principal +		InterestAndDiscount::interest;

	cout << "Interest Calculation";
	cout << "\nPrincipal: $" << InterestAndDiscount::principal
	     << "\nRate: " << InterestAndDiscount::rate << "%"
	     << "\nDiscount: " << InterestAndDiscount::discount
	     << "\nPeriods: " << InterestAndDiscount::periods << " years"
	     << "\nInterest: $" << InterestAndDiscount::interest
	     << "\nMaturity Value: $" << InterestAndDiscount::maturityValue;

	BuyAndSell::originalPrice = 250; // $
	BuyAndSell::taxRate = 16.00; // %
	BuyAndSell::discount = 20.00; // %
	BuyAndSell::taxAmount = BuyAndSell::originalPrice *
			BuyAndSell::taxRate / 100;
	BuyAndSell::discountAmount = BuyAndSell::originalPrice *
			 BuyAndSell::discount / 100;
	BuyAndSell::netPrice = BuyAndSell::originalPrice +
		   BuyAndSell::taxAmount -
			   BuyAndSell::discountAmount;

	cout << "\n\nBuy and Sell - Receipt";
	cout << "\nOriginal Price: $" << BuyAndSell::originalPrice
	     << "\nDiscount: $" << BuyAndSell::discountAmount
	     << "\nTax Rate: " << BuyAndSell::taxRate
	     << "\nTax Amount: $" << BuyAndSell::taxAmount
	     << "\nNet Price: $" << BuyAndSell::netPrice << "\n\n";
	return 0;
}




