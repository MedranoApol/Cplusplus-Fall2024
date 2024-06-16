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
	int times;
	char letter;
	
	cout << "Please press the return key after you insert your number." << endl
		 << "How what character would like repeated?\n";
	cin >> letter;
	cout << endl;
	
	cout << "Please enter the amount of times you would want it repeated." << endl;
	cin >> times;
	cout << endl;
	
	for (int t=times;t>0;t--)
	{
		cout << letter;
	}
	
	cout << endl;
	 return 0;
}
