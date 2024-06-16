//Apol Medrano
//HW5 General Q2
//program deletes letters 'rd' from string
#include <iostream>
#include <string>
using namespace std;

void EraseLetters (string line);
//takes in string, and couts the string with deleted letters
int main()
{
	string line;
	
	cout << "Please enter any word (or sentence): ";
	getline(cin, line);
	EraseLetters(line);
	return 0;
}
void EraseLetters (string line)
{
	char temp_letter, letter;
	int LocationOfRletter;
	for(int i=0; i<line.length(); i++)
	{ 
		letter = line.at(i);
		if (temp_letter == 'r' && letter == 'd')
		{   //deletes starting at r and deletes it and d
			line.erase((LocationOfRletter), 2);
			if (i > line.length())
			break; //protects loop from crashing if
		}		   //'rd' appears at the end of a word
		temp_letter = line.at(i);
		LocationOfRletter = i;
	}	
	cout << "Altered line: " << line;
}
