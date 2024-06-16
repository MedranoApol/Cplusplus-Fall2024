//HW5 General Q2
//Apol Medrano
#include <iostream>
#include <string>
using namespace std;
void GetString();
//lets user input the string
void EraseLetters (string line);
//takes in string, and couts the string with deleted letters
int main()
{
	GetString ();
	return 0;
}
void GetString()
{
	string line;
	
	cout << "Please enter any word you'd like: ";
	getline(cin, line);
	EraseLetters(line);
}
void EraseLetters (string line)
{
	int line_size = line.length()/2;
	int lineSizeRemainder = line.length()%2;
	if (lineSizeRemainder == 0) //if word is even,
	{ //it deletes the two middle numbers
		line.erase((line_size-1), 2);
		cout << line;
	}
	else //if word is odd, then it deletes the
	{ //the one letter that falls right in the middle
		line.erase (line_size, 1);
		cout << line;
	}
}


	
