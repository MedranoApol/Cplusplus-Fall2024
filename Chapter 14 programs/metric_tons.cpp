#include <iostream>
using namespace std;
int main(){
	const double metric = 35273.92;
	double enteredOunce;
	
	cout << "A metric ton is " << metric << " ounces.\n";
	cout << "Enter weight of cereal box in ounces: ";
	cin >> enteredOunce;
	
	cout << "You will need " << (metric/enteredOunce) << " boxes of that"
		 << " cereal to reach a metric ton in weight.\n";
	
	return 0;
}
