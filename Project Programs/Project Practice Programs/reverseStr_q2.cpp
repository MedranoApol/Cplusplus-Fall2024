#include <iostream>
#include <string>
using namespace std;

string reverse(string theString)
{
	string reverse("");
	for (int i = theString.length(); -1 < i; i--)
		reverse += theString[i];
	return reverse;
}

int main()
{
	string line;
	cout << "Enter a line of text: ";
	getline(cin,line);
	
	string backwards = reverse(line);
	
	cout << "\n" << "Reversed text: " << backwards;
	return 0;
}
