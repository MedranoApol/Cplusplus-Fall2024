//HW3 Q3
//Apol Medrano
#include <iostream>
using namespace std;

double coinValue(int quartersPar,int dimesPar,int nickelsPar);
//take number of coins, return monetary value

int main()
{
	int quarters, dimes, nickels;
	
	cout << "How many quarters: ";
	cin >> quarters;
	cout << "How many dimes: ";
	cin >> dimes;
	cout << "How many nickels: ";
	cin >> nickels;
	
	cout << "The monetary values of the coins is $" << coinValue(quarters,dimes,nickels);
}

double coinValue(int quartersPar,int dimesPar,int nickelsPar)
{
	double quarterValue = quartersPar * 0.25, //0.25 nickels value
	dimesValue = dimesPar * 0.10, nicklesValue = nickelsPar * 0.05, totalValue;
	//0.10 dimes value & 0.05 nickels value
	totalValue = quarterValue + dimesValue + nicklesValue;
	//all the coins added up
	return (totalValue);
}
