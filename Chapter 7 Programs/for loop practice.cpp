#include <iostream>
using namespace std;
int main ()
{
	int length;
	cout << "Enter in the length you like!" << endl;
	cin >> length;
	for (int i=1; i < length + 1; i++)
	{
		for (int j = length; j >= i;j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
