#include <iostream>
using namespace std;
int main ()
{
	double temperature;
	const double fever_temp=98.6;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	
	cout << "Hello, please insert your current temperature:" << endl;
	cin >> temperature;
	cout << endl;
	
	if (temperature >= fever_temp)
		cout << "You have a fever!" << endl;
	else
		cout << "No fever." << endl;
		
	cout << endl;
	cout << "Wishing good health upon you!" << endl;
	return 0;
}
