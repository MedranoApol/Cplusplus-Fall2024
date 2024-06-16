//File Name: HW1 Q4.cpp
//Author: Apol Medrano
//Email Adress: MedranoA@heritage.edu
//Assignment Number: HW 1, Question 4
//Description: Creating a design with the star symbol in a descending decrement fashion
//Last Changed: August 30, 2023
#include <iostream>
using namespace std;
int main ()
{
	int stars;
	
	cout << "Please press the return key after you insert your number." << endl
		 << "How long would like the star pattern to be?\n";
	cin >> stars;
	cout << endl;
	
	for (int levels=1;levels<=stars;levels++)
	{
		for (int length=stars;length>=levels;length--)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Wow. Pretty cool, right!\n"
		 << "Thank you user for letting me show you my C++ prowess!" << endl;
	 return 0;
}
