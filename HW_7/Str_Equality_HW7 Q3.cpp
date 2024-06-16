//HW7 Q3 Apol Medrano
//Compares two strings using pointers
#include <iostream>
#include <string>
using namespace std;

bool StringEquality (string* text1, string* text2);
//evalutes two string if they are equal or not
//returns true or false
int main()
{
	string* text1 = new string;
	string* text2 = new string;
	
	cout << "Enter first line of text:\n";
	getline(cin, *text1); 
	cout << "\nEnter second line of text:\n";
	getline(cin, *text2);
	
	if (StringEquality(text1,text2))
	cout << "\nThey are the same!\n";
	else
	cout << "\nThey aren't the same!\n";
	
	delete text1;
	delete text2;
	return 0;
}
bool StringEquality (string* text1, string* text2)
{
	if (*text1 == *text2)
		return (true);
	else
		return (false);
}
