#include <iostream>
using namespace std;
int main ()
{
	double purchase=100, tax, pur_w_tax;
	const double tax_p=0.06;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	(tax = purchase * tax_p);
	(pur_w_tax = purchase + tax);
	
	cout << "if you made a purchase that was " << purchase << " dollars." << endl
		 << "if that purchase have a " << tax_p << " taxation." << endl
		 << "then you would have to pay " << pur_w_tax << " dollars." << endl;
	return 0;
}
