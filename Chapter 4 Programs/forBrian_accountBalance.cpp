#include <iostream>
using namespace std;

double AccountBalance (double balance, double interest_rate, double numberOfMonths);
/*function declearation: 
double AccountBalance ( double balance, double interest_rate, double numberOfMonths);*/

int main()
{
	double balance, interest_rate, numberOfMonths;
	
	cout << "Current Balance: ";
	cin >> balance;
	cout << "Interest Rate: ";
	cin >> interest_rate;
	cout << "Months of interest you want calculated: ";
	cin >> numberOfMonths;
	cout << endl;
	
	cout << "Your credict card account balance after " << numberOfMonths;
	cout << " months, will be $" << AccountBalance(balance,interest_rate,numberOfMonths);
		
}

double AccountBalance (double balance, double interest_rate, double numberOfMonths)
{
	while (numberOfMonths--> 0)
	{
		balance = balance + (balance * interest_rate);
	}
	return (balance);
}





