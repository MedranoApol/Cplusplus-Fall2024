#include <iostream>
using namespace std;
int main ()
{
	int dependents;
	double hours, sst, fit, sit, total_pay, temp_total, overtime, overtime_total;
	const double b_overtime=40, wage=16.78, unionfees=-10, dep_fee=-35;
	char ans;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
		
	do
	{
		cout << "Insert the amount of hours you worked this week:" << endl;
		cin >> hours;
		cout << "Insert the amount of dependents you have:" << endl;
		cin >> dependents;
		
		if (hours <= b_overtime)
		{
			(temp_total = hours * wage);
			(total_pay = temp_total);
			(sst = temp_total * 0.06);
			(total_pay = total_pay - sst);
			(fit = temp_total * 0.14);
			(total_pay = total_pay - fit);
			(sit = temp_total * 0.05);
			(total_pay = total_pay - sit);
			(total_pay = total_pay + unionfees);
		
			if (dependents >= 3)
			{
				(total_pay = total_pay + dep_fee);
			}
			else if (dependents < 3)
			{
				(total_pay = total_pay);
			}
			else
			{
				cout << "The value you entered for dependents is invalid." << endl;
				(total_pay = total_pay);
			}
		}
		else if (hours > b_overtime)
		{
			(temp_total = b_overtime * wage);
			(overtime = hours - b_overtime);
			(overtime_total = wage *(overtime * 1.5));
			(temp_total = overtime_total + temp_total);
			(total_pay = temp_total);
			(sst = temp_total * 0.06);
			(total_pay = total_pay - sst);
			(fit = temp_total * 0.14);
			(total_pay = total_pay - fit);
			(sit = temp_total * 0.05);
			(total_pay = total_pay - sit);
			(total_pay = total_pay + unionfees);
			
			if (dependents >= 3)
			{
				(total_pay = total_pay + dep_fee);
			}
			else if (dependents < 3)
			{
				(total_pay = total_pay);
			}
			else
			{
				cout << "The value you entered for dependents is invalid." << endl;
				(total_pay = total_pay);
			}
		}
		else 
		{
			cout << "The number of hours you entered is invalid." << endl;
			(total_pay = 0);
		}
	
		cout << "Your pay for working " << hours << " hours," << endl
			 << "while having " << dependents << " dependent(s)," << endl
			 << "will end up being " << total_pay << " dollars." << endl
			 << endl
			 << "Would you like to calculate another week's total pay?" << endl
			 << "Y for Yes, N for No." << endl;
		cin >> ans;
		cout << endl;
	} while ((ans == 'y')||(ans == 'Y'));
	
	cout << "Thank you for your time and I hope you have a great rest of your day!" << endl;
	return 0;
}
