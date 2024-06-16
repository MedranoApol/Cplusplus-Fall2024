#include <iostream>
using namespace std;
int main ()
{
	int osmar;
	char brian;
	
	do 
	{
		cout << "How many times will osmar show up to class late?" << endl;
		cout << "(insert a number and then, press the return key.)" << endl;
		cin >> osmar;
	
		for (int i=osmar++;i>0;--i)
		{
			cout << endl;
		
			for (int j=osmar;j>i;j--)
			{
				cout << "Osmar is late ";
			}
		}
		
		cout << endl;
		cout << "Would you like to do this again or nah" << endl;
		cout << "Y for Yes, N for No" << endl;
		cin >> brian;
		cout << endl;
	} while (brian == 'y'||brian == 'Y');
	
	cout << "Thanks for playing guey!" << endl;
	
	return 0; 
}
