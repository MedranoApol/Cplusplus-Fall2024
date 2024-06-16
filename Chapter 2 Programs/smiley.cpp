#include <iostream>
using namespace std;
int main ()
{
	int n;
	
	cout << "Hello, how many times would you like to see a smile face?" << endl;
	cin >> n;
	cout << endl;
	
	while (n-- > 0)
	{
		cout << ":) ";
	}
	
	cout << endl;
	cout << endl;
	cout << "Thank you for your time!" << endl;
	return 0;
}
