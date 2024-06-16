#include <iostream>
#include <string>
using namespace std;
int main()
{
	string f_name, l_name;
	
	cout << "Enter your first name: ";
	cin >> f_name;
	cout << "Enter your last name: ";
	cin >> l_name;
	 
	cout << endl << f_name << endl; 
	for (int i = 0; i < l_name.length(); i++)
	{
		cout << l_name[i] << " ";
		l_name[i] = '_';
	}
	cout << endl;
	for (int i = 0; i < l_name.length(); i++)
	{
		cout << l_name[i] << " ";
	}
	cout << endl << "Have a good day!\n";
	return 0;
}
