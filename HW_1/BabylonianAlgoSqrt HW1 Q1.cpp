//File Name: 2WaterBottle.cpp
//Author: Apol Medrano
//Email Adress: MedranoA@heritage.edu
//Assignment Number: HW 1, Question 1
//Description: Using Babylonian Algorithm to compute square root of number
//Last Changed: August 29, 2023
#include <iostream>
using namespace std;
int main ()
{
	double n, r, guess, count = 1;
	
	cout << "Insert number that you would like to find the square root of: ";
	cin >> n;
	
	cout << "Now make an intially guess of what they square root may be: ";
	cin >> guess;
	
	while (count++ < 100)
	{
		(r = n/guess);
		(guess = (guess + r)/2);
	}
	
	cout << "The square root of " << n << endl;
	cout << "is " << guess << ".\n";
	return 0;
}
