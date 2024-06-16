#include <iostream>
using namespace std;
void getInput (double& cost, int& turnover);

double price (double cost, int turnover);

void getOutput (double cost, int turnover, double price);

int main ()
{
	double WholeSaleCost, retailPrice;
	int shelfTime;
	getInput(WholeSaleCost,shelfTime);
	retailPrice = price(WholeSaleCost,shelfTime);
	getOutput(WholeSaleCost, shelfTime, retailPrice);
}

void getInput (double& cost, int& turnover)
{
	cout << "Enter wholesale cost of your item?\n";
	cin >> cost;
	cout << "Enter the amount of days before it was sold?\n";
	cin >> turnover;
}

double price (double cost, int turnover)
{
	double LM = 0.05, HM = 0.1;
	if (turnover <= 7)
	{
		return (cost + (cost * LM));
	}
	else 
	{
		return (cost + (cost * HM));
	}
}

void getOutput (double cost, int turnover, double price)
{
	cout << "The wholesale cost of the item is $" << cost << ".\n";
	cout << "The amount of days before it was sold was " << turnover << ".\n";
	cout << "The total price of your item is $" << price << ".\n";
}
