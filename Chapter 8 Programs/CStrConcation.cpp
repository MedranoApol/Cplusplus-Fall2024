#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[80];
	cout << "Enter Whatever you like:\n";
	cin.getline(a,80);
	strcat (a, " wtf.");
	cout << "You have entered: " << a << endl;
	cout << "That was dumb lol" << endl;
	return 0;
}
