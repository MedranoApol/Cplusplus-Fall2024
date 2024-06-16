#include <iostream>
using namespace std;
int main ()
{
	double WaterBottleLvl;
	
	cout << "Enter approximate water level in water bottle \n";
	cin >> WaterBottleLvl;
	
	if (WaterBottleLvl < 0.5)
	{
		cout << "Your water bottle level is below halfway, it's not a big deal but think about refilling it soon. \n";
		
		if (WaterBottleLvl < 0.25)
			cout << "Damn brotha, you should really fill that up. \n"
				 << "Way to stay hydrated doe. hehe" << endl;
	}
	else 
	{
		cout << "Water Bottle level is great right now. \n";
	}
	
	cout << endl
		 << "Thanks for using this!" << endl;
	return 0;
}
