#include <iostream>
using namespace std;

void increment (int& n)
{
	n++;
	cout << "inside is " << n << endl;
}

int main()
{
	int x=1;
	
	cout << "before call x = " << x << endl;
	increment(x);
	cout << "next x = " << x << endl;
	return 0; 
}


