#include <iostream>
using namespace std;
int main ()
{
	int n_months=0;
	double intial_balance=50, i_ad;
	const double interest=0.02;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "As of right now you have a balance of " << intial_balance << " dollars.\n"; 
	
	while (intial_balance<=100)
	{
		(n_months++);
		(i_ad = intial_balance * 0.02);
		(intial_balance = intial_balance + i_ad );
	}
	
	cout << "The number of months it took for your balance to go from 50 to 100 with a 2% interest rate is:\n"
		 << n_months << " months." << endl;
	return 0;
}
