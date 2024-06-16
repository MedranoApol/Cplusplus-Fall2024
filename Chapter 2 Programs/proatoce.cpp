#include <iostream>
using namespace std;
int main ()
{
	int number;
	
	cout << "How many times should we see a pattern?" << endl;
	cin >> number;
	cout << endl;
	
	for (int i=number++;i>0;--i)
	{
		cout << endl;
		
		for (int j=number;j>i;j--)
		{
			cout << "Burb ";
			
		}	
	}
	return 0;	
}
