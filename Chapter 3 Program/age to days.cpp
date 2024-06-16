#include <iostream>
using namespace std;
int main ()
{
	int years, months, m_, year_a, month_a, total_age;
	const int y=365,m=31;
	char ans;
	
	do
	{
		cout << "This program will help you get an approximate number of the amount of days you've been alive!" << endl
		 	 << "First, let's start by having you enter your age!" << endl;
		cin >> years;
		cout << endl
			 << "Now, how months are you away from your next birthday?" << endl;
		cin >> m_;
		cout << endl;
		
		(months = 12 - m_);
		(year_a = years * y);
		(month_a = months * m);
		(total_age = year_a + month_a);
		
		cout << "An rough estimate of the days you've roamed this earth is " << total_age << " days!" << endl
			 << endl
			 << "Would you like to convert another age to days?" << endl
			 << "Y for yes, N for no." << endl;
		cin >> ans;
		cout << endl;	
	} while ((ans == 'y')||(ans == 'Y'));
	
	cout << "Thank you for your time!" << endl;
	return 0;
}
