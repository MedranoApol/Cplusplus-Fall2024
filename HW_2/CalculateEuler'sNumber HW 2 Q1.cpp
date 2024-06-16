#include <iostream>
using namespace std;
int main ()
{
	int i,j,n;
	double e, factorial;
	
	cout << "Hello!" << endl
		 << "Insert any number you would like to find the value of euler's number!" << endl
		 << "(Please hit the return key after you insert the number)" << endl;
	cin >> n;
	
	for (i=1;i<n;i++)
	{
		(factorial = 1);
		
		for (j=1;j<i;j++)
		{
			(factorial = factorial * j);
		}
		
		(e = e+1/factorial);
	}
	
	cout << "The value of e is " << e << "." << endl;
	return 0;
}
