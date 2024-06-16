//File Name: HW1 Q3.cpp
//Author: Apol Medrano
//Email Adress: MedranoA@heritage.edu
//Assignment Number: HW 1, Question 3
//Description: Insert Number to see if it is a prime number
//Last Changed: August 30, 2023
#include <iostream>
using namespace std;
int main ()
{ 						
	int n;
	char ans;
	
	do
	{
		cout << "Insert a number to see if it is a prime number." << endl;
		cin >> n;
		cout << "The number you choose was " << n << "." << endl
			 << endl;
	
		if (n == 0)	
		{
			cout << n << " is undefined." << endl;
		}
		else if (n == 1)
		{
			cout << n << " is technically not a prime number, but truely is a standard." << endl;
		}
		else if (n == 2)
		{
			cout << n << " is a prime number." << endl;
		}
		else if (n == 3)
		{
			cout << n << " is a prime number." << endl;
		}
		else if (n == 5)
		{
			cout << n << " is a prime number." << endl;
		}
		else if (n%2 > 0)
		{
			if (n%3 > 0)
			{
				if (n%5 > 0)
				{
					cout << n << " is a prime number." << endl;
				}
				else
				{
					cout << n << " is not a prime number." << endl;
				}
			}
			else
			{
				cout << n << " is not a prime number." << endl;
			}
		}
		else 
		{
			cout << n << " is not a prime number." << endl;
		}
		
		cout << endl
			 << "Would you like to play again?" << endl
			 << "Y for Yes, N for No." << endl;
		cin >> ans;
		cout << endl;
		
	}while ((ans == 'y') || (ans == 'Y'));
	
	cout << "Thank you for playing along! Have a great rest of your day :)" << endl; 
	return 0;
}
