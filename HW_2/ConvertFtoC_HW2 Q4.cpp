#include <iostream>
using namespace std;
int main ()
{
	int f, c=100;
	
	(f=(9*c)/5 + 32);
	
	while ((f>c)||(c>f))
	{
		(c--);
		(f=(9*c)/5 + 32);
	}
	
	cout << "The number where celcius and fahrenheit are equal is " << c << " degress.\n";
	return 0;
}
