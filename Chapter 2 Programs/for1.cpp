//for1.cpp
#include <iostream>
using namespace std;
int main ()
{
	int n;
	
	cout << "Please insert the amount of times you want to see hello!" << endl;
	cin >> n;
	cout << endl;
	
	for (int i=1; i<=n;i++)
	{
		cout << "Hello, brother! I am going to repeat myself" << endl;
	}
	
	cout << "Okay, I'm done. \n";
	return 0;
}
