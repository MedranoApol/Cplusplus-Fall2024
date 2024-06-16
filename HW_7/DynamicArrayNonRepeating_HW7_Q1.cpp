//HW7 Q1 Apol Medrano
//returning dynamic array with non-repeating letters
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

typedef char* CharArrayPtr;
//defines char pointer as a data type
CharArrayPtr NoConsecutive (string line);
//takes in string deletes repeating character from string
//returns char array filled with edited string to main
void FillArray(CharArrayPtr &a, string line);
//takes in empty dynamic array and string
//returns char array fillled with edited string within function
int main()
{
	string line;
	CharArrayPtr a;
	cout << "Enter any line of text you'd like: \n";
	getline(cin, line);
	a = NoConsecutive(line);
	cout << endl << "No repeating letters: " << a;
	delete []a;
	return 0;
}
CharArrayPtr NoConsecutive(string line)
{
	for (int i=0;i<line.length(); i++)
	{
		for (int j=i+1;j<line.length(); j++)
		{
			if (!isspace(line[i]))
			{
				if (tolower(line[i])== tolower(line[j]))
				{
					line.erase(j,1);
					j-=1; 
				}
			}		  
		}			  
	}
	CharArrayPtr nonRepeatable = new char[line.length()];
	FillArray(nonRepeatable, line);
	return (nonRepeatable);
}
void FillArray(CharArrayPtr &a, string line)
{
	int index;
	for (index = 0; index<line.length(); index++)
	{
		a[index] = line[index];
	}
	a[index] = '\0';
}
