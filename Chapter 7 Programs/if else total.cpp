#include <iostream>
using namespace std;
int main()
{
	double price, total;
	int days;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Enter wholesale cost of your item?\n";
	cin >> price;
	cout << "Enter the amount of days before it was sold?\n";
	cin >> days;
	if ( days <= 7)
	{
		total = price * 1.05;
	}
	else 
	{
		total = price * 1.10;
	}
	cout << "The wholesale ost of the item is $" << price << ".\n";
	cout << "The amount of days before it was sold was " << days << ".\n";
	cout << "The total price of your item is $" << total << ".\n";
	return 0;
}
