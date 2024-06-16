//HW5 General Q2
//Apol Medrano
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	int wordCount = 0;
	int articleCount = 0;
	
	getline(cin, line);
		string word = "";//loop through each character
		for(int i=0; i<line.length(); i++)
		{
			char letter = line.at(i);
			word += tolower(letter);
			if(letter == ' ')//space means word has ended
			{
				wordCount++;
				if (word == "the "||word == "an "|| word == "a ")
				{
					articleCount++;
				}
				word = "";
			}
		}
		if(word.length()>0)
		{
			wordCount++;
			if (word == "the "||word == "an "|| word == "a ")
			{
				articleCount++;
			}
		word = "";
		}
	
	
	cout << "Word count = " << wordCount << endl;
	cout << "Article count = " << articleCount << endl;
}
