//HW3 Q1
//Apol Medrano
#include <iostream>
using namespace std;

double totalCost(double PricePar);
//taking the price of item and adding 0.05 sales tax to it

int main ()
{
	double price;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2); //display money properly
	
	while (price!=0)
	{
		cout << "What is the price of the item you have? \n";
		cin >> price;
		cout << "The total cost is: $" << totalCost(price) << endl;
	}
	return 0;
}

double totalCost(double PricePar)
{
	const double SALES_TAX = 0.05 * PricePar; //0.05 sales tax
	double totalCost = PricePar + SALES_TAX; //tax added on to item price
	
	return (totalCost);	
}
