#include <iostream>
#include <string>
using namespace std;

//collect coins
double collectCoins();

//get coin value
double getCoinValue(int numberOfCoins,string typeOfCoin);

//make purcahse
double makePurchase(double payment);

int main()
{
	double budget;
	budget = collectCoins();
	budget = makePurchase(budget);
	cout << "The machine returns $" << budget << endl;
}

double collectCoins()
{
	string type;
	int quantity;
	double totalValue=0;
	while(true)
	{//ask for a coin type
		cout << "What type of coin do you have? (Dollar, Quarter, Nickel, Dime)\n";
		cin >> type;
		if (type == "stop")
		{
			break;
		}
		//ask for quantity
		cout << "How many " << type << "(s) are you entering?\n";
		cin >> quantity;
		totalValue += getCoinValue(quantity, type);
		cout << "Budget: " << totalValue << endl;
	}
	return totalValue;
}

double getCoinValue(int numberOfCoins, string typeOfCoin)
{
	if((typeOfCoin == "Dollar")||(typeOfCoin == "dollar"))
	{
		return 1 * numberOfCoins;
	}
	if((typeOfCoin == "Quarter")||(typeOfCoin == "quarter"))
	{
		return 0.25 * numberOfCoins;
	}
	if((typeOfCoin == "Nickel")||(typeOfCoin == "nickel"))
	{
		return 0.05 * numberOfCoins;
	}
	if((typeOfCoin == "Dime")||(typeOfCoin == "dime"))
	{
		return 0.10 * numberOfCoins;
	}
	cout << "\"" << typeOfCoin << "\" is not an option. Please try again\n";
	cout << "Type \"stop\" to end coin collection\n";
	return 0;
}
double makePurchase(double payment)
{
	if(payment >= 3.50)
	{
		cout << "Item purchased\n";
		return payment - 3.50;
	}
	else
	{
		cout << "You still need to insert more money." << endl;
		return 3.50 - payment;
	}	
}
 
