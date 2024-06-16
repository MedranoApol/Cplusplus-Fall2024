#include <iostream>
using namespace std;
int main ()
{
	int t, times;
	char letter;
	
	cout << "Enter the amount times you could like to see your character repeated!" << endl;
	cin >> t;
	
	cout << "Insert a character you would like to see repeated! (only one character please)" << endl;
	cin >> letter;
	
	
	(times = t);
	while (times>0);
	{
		cout << letter;
		(times = times - 1);
	}
	
	cout << endl
		 << "Thank you for your time!" << endl;
	return 0;
}
