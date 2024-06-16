//HW3 Q5
//Apol Medrano
#include <iostream>
using namespace std;

double coinValue(int dollarsPar,int quarterPar,int dimePar,int nicklePar);
//take monetary values put in vending machine, return total change

int main()
{
	int dollars=0, quarters=0, dimes=0, nickels=0;//intialize zero since C++ doesn't do it itself always
	double totalChange=0, coinsLeft2Pay, moneyRemainding;
	const double sweets = 3.50;
	char selection;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "A sweet is $3.50 to purchase!" << endl;//lets user know the amount they will need to pay
	
	while (totalChange < sweets)//loop until totalchange is more than 3.50
	{
		cout << "What monetary value would you like to insert?" << endl
			 << "A. Dollar" << endl 
			 << "B. Quarter" << endl
			 << "C. Dime" << endl
			 << "D. Nickel" << endl;
		cin >> selection;
		
		switch (selection)//allows vending machine user choose what coin they want to insert
		{//when they choose, they get to insert the amount of that coin they have
			case 'A':
			case 'a':
				cout << "The amount of dollars you will be inserting is: ";
				cin >> dollars;
				break;
			case 'B':
			case 'b':
				cout << "The amount of quarters you will be inserting is: ";
				cin >> quarters;
				break;
			case 'C':
			case 'c':
				cout << "The amount of dimes you will be inserting is: ";
				cin >> dimes;
				break;
			case 'D':
			case 'd':
				cout << "The amount of nickels you will be inserting is: ";
				cin >> nickels;
				break;
			default:
				cout << "Invalid character." << endl;		
		}
		//the total change will be updated with the new monetary value every loop
		(totalChange = coinValue(dollars,quarters,dimes,nickels));
		cout << "You have inserted in $" << totalChange << "." << endl;
		
		if (totalChange < sweets) //if totalChange < 3.50 calculates money left to pay
		{//also prompts vending machine user to insert more change
		(coinsLeft2Pay = sweets - totalChange);
		cout << "You have $" << coinsLeft2Pay << " left to pay." << endl
			 << "Insert next coin." << endl << endl; 
		}
		else if (totalChange >= sweets) //if totalChange >= 3.50 calculates their change
		{//also gives vending machine user a nice message after purchasing sweet
		(moneyRemainding = totalChange - sweets);
		cout << "You will get $" << moneyRemainding << " in change." << endl << endl;
		cout << "Enjoy your sweet!" << endl;
		}
	}
	return 0;
}

double coinValue(int dollarsPar, int quartersPar,int dimesPar,int nickelsPar)
{
	double dollarsValue = 1 * dollarsPar, quarterValue = quartersPar * 0.25, //dollars & quarters values
	dimesValue = dimesPar * 0.10, nickelsValue = nickelsPar * 0.05, totalValue; //dimes, nickels values
	
	totalValue = dollarsValue + quarterValue + dimesValue + nickelsValue;//totalValue is all the coin values added
	return (totalValue); //totalvalue is returned to become totalchange in the main program
}
