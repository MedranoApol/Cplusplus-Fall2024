//File Name: HW1 Q2.cpp
//Author: Apol Medrano
//Email Adress: MedranoA@heritage.edu
//Assignment Number: HW 1, Question 2
//Description: Converting annual salary with retroactive pay to annual & monthly
//Last Changed: August 30, 2023
#include <iostream>

void DosDecimalPlaces ();
//sets decimal place in hundreds place

using namespace std;
int main ()
{
	double as, rp, new_as, new_ms;
	const double inc = 0.076;
	char ans;
	
	do
	{
	cout << "Hello!" << endl
		 << "Insert your annual pay to recieve your retroactive pay for the last 6 months" << endl
		 << "(Please do not use any commas, and don't forget to hit the return key after you enter it) \n";
	cin >> as;
	cout << "Your annual pay is of right now is " << as << " dollars." << endl;
	
	(rp = (as/2) * inc);
	cout << "Your retroactive pay is " << rp << " dollars." << endl;
	
	(new_as = (rp + as));
	cout << "Your new annual salary is " << new_as << " dollars." << endl;
	
	(new_ms = (new_as/12));
	cout << "Your new monthly salary is " << new_ms << " dollars." << endl;
	
	cout << endl;
	cout << "Would you like to do another calculation of a annual salary with 6 months of retroactive pay?\n";
	cout << "Press y for yes" << endl
		 << "Press n for no" << endl;
	cin >> ans;
	cout << endl;
	} while (ans == 'y' || ans == 'Y');
	
	cout << "Before you go, I would like to congratulate you on working hard to earn the retroactive pay!" << endl
		 << "You deserve it and I hope you have an amazing rest of your day!\n";
	
	return 0;
}

void DosDecimalPlaces ()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
}

