#include <iostream>
using namespace std;
int main ()
{
	int normalNumber, badNumber, totalNumber;
	cout << "Hello! \n";
	cout << "Give me good number right now! (insert any number and press enter) \n";
	cin >> normalNumber;
	cout << normalNumber;
	cout << " is the number you inputed \n";
	cout << "Now if you could pretty please insert a zero!\n";
	cin >> badNumber;
	cout << badNumber;
	cout << " is a number that should be zero, if not you are not listening properly. \n";
	totalNumber = normalNumber/badNumber;
	cout << "So you have entered ";
	cout << normalNumber;
	cout << " as your first input. \n";
	cout << "It should now be being divided by ";
	cout << badNumber;
	cout << ".\n";
	cout << "So that means that ";
	cout << totalNumber;
	cout << " is your answer!\n";
	cout << "Thank you! \n";
	return 0;
}
