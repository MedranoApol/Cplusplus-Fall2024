//HW3 Q6
//Apol Medrano
#include <iostream>
using namespace std;

void DosDecimalPlaces();
//sets decimal place as hundreds place

void InsertBalance_Interest_Months ();


void monthlyInterest(double balancePar, double interestPar, double numberOfMonthsPar);
//calculates interest added to an existing balance for the amount of months entered
//displays updated balance for every month

int main ()
{
	DosDecimalPlaces();
	InsertBalance_Interest_Months ();
		
	return 0;
}

void DosDecimalPlaces()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
}

void InsertBalance_Interest_Months ()
{
	double balance, interest, numberOfMonths, monthsShown;
	
	cout << "Intial credit card balance: ";
	cin >> balance;
	cout << "Interest rate on balance (write as decimal): ";
	cin >> interest;
	cout << "Amount of months of interest: ";
	cin >> numberOfMonths;
	
	monthlyInterest(balance,interest,numberOfMonths);
	
}

void monthlyInterest(double balancePar, double interestPar, double numberOfMonthsPar)
{
	for (int monthsShown=1;monthsShown<(numberOfMonthsPar + 1);monthsShown++)
	{	//loops to show the balance increase for every month
		balancePar = balancePar + (balancePar * interestPar);
		//equation for every months interest rate added to month
		cout << "After " << monthsShown << " month(s),"
			 << "you're credit card balance will be "
			 << balancePar << endl;
	}
}
