//File Name: HW1 Q5.cpp
//Author: Apol Medrano
//Email Adress: MedranoA@heritage.edu
//Assignment Number: HW 1, Question 5
//Description: Converting a time in seconds to hours : mins : secs
//Last Changed: August 30, 2023
#include <iostream>
using namespace std;
int main ()
{
	int time, hr_t, r_hr, m_t, r_m, s_t;
	const int hr = 3600, min = 60, sec = 1;
	
	cout << "Enter your time in seconds. (No commas please)" << endl;
	cin >> time;
	cout << endl;
	
	(hr_t = time/hr);
	(r_hr = time%hr);
	cout << "Your time so far in hours is " << hr_t << "." << endl
		 << endl;
		 
	(m_t = r_hr/min);
	(r_m = r_hr%min);
	cout << "Your time remaining time in minutes is " << m_t << "." << endl
		 << endl;	 
	
	(s_t = r_m/sec);
	cout << "The last bit of your time in seconds is " << s_t << "." << endl
		 << endl;
		 
	cout << "In conclusion, the time you entered of " << time << " seconds," << endl;
	cout << "can be written as: " << hr_t << " hours, " << m_t << " minutes, and " << s_t << " seconds. \n";
	cout << endl;
	cout << "Thank you for your time!" << endl;
	return 0;
}
