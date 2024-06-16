//File Name: HW1 Q2.cpp
//Author: Apol Medrano
//Email Adress: MedranoA@heritage.edu
//Assignment Number: HW 1, Question 2
//Description: Converting annual salary with retroactive pay to annual & monthly
//Last Changed: August 30, 2023
#include <iostream>
using namespace std;
int main ()
{
	int placeholder;
	double as, amount_months, m_to_year, rp, new_as, new_ms;
	const double inc = 0.076;
	char ans;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	do
	{
	cout << "Hello!" << endl
		 << "First enter your annual pay!" << endl
		 << "(Please do not use any commas, and don't forget to hit the return key after you enter it) \n";
	cin >> as;
	cout << "Your annual pay is of right now is " << as << " dollars." << endl;
	cout << endl
		 << "Now enter the amount of months you will calculating retroactive pay!" << endl;
	cin >> placeholder;
	cout << "You wish to see the retroactive of " << placeholder << " months of your annual pay!\n"
		 << endl;
	
	(amount_months = placeholder);
	(m_to_year = (amount_months/12));
	(rp = (as*m_to_year) * inc);
	cout << "Your retroactive pay is " << rp << " dollars." << endl;
	
	(new_as = (rp + as));
	cout << "Your new annual salary is " << new_as << " dollars." << endl;
	
	(new_ms = (new_as/12));
	cout << "Your new monthly salary is " << new_ms << " dollars." << endl;
	
	cout << endl;
	cout << "Would you like to do another calculation of a annual salary with a certain amount of months of retroactive pay that you decide?\n";
	cout << "Press y for yes" << endl
		 << "Press n for no" << endl;
	cin >> ans;
	cout << endl;
	} while (ans == 'y' || ans == 'Y');
	
	cout << "I hope you have an amazing rest of your day!\n";	 
	return 0;
}
