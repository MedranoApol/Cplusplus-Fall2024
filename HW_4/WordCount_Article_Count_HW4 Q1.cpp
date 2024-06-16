//HW4 Q1
//Apol Medrano
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{//open the file
	ifstream inStream("question1.txt");
	string line;
	int wordCount = 0;
	int articleCount = 0;
	
	cout << "The line(s):" << endl << "\"";
//start looping lines in the file
	while(getline (inStream, line))
	{
		//loop through each character
		string word = "";
		for(int i=0; i<line.length(); i++)
		{
			char letter = line.at(i);
			word += tolower(letter);
			if(letter == ' ')
			{
				wordCount++;
				if (word == "the "||word == "an "|| word == "a ")
				{
					articleCount++;
				}
				cout << word;
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
		cout << word;
		word = "";
		}
	}
	cout << "\"" << endl;
	cout << "Word count = " << wordCount << endl;
	cout << "Article count = " << articleCount << endl;
}
