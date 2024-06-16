//whilegoop30.cpp
#include <iostream>
using namespace std;
int main ()
{
	int n, i;
	
	cout << "Please insert the amount of times you want to see hello!" << endl;
	cin >> n;
	cout << endl;
	
	i = 1;
	
	while (i++ <= n)
	{
		cout << "Hello, brother! I am going to repeat myself" << endl;
	}
	
	cout << endl;
	cout << "Okay, I'm done. \n";
	return 0;
}
