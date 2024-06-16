//HW6 Q1 Apol Medrano
//average word length of string from text
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
void CopyCountPrint (ifstream& inStream, string line);
//gets line from file, counts words,
//calculates average word length, prints output
void CopyCountPrint(istream& cin, string line);
//gets line from file, counts words,
//calculates average word length, prints output
int main()
{
	ifstream inStream;
	string line;
	CopyCountPrint(inStream,line);
	return 0;
}
void CopyCountPrint (ifstream& inStream, string line)
{
	inStream.open("Q1Text.txt");
	string result("");
	int wordCount = 0; 
	double sumOFLength = 0;
	while(getline(inStream, line))
	{
		string word("");
		for (int i=0; i<line.length();i++)
		{
			if (isalpha(line.at(i)))
			word += line.at(i);
			
			if (!isalpha(line.at(i)))
			{
				if (word.length()>0)
				{
					wordCount++;
					sumOFLength += word.length();
				}
				
				result += word;
				result += line.at(i);
				word = "";
			}
		}
	}
	cout << "The string of text:\n";
	cout << "\"" << result << "\"" << endl;
	cout << "\nThe text contains " << wordCount << " words "
		 << "with the average length of words being " << (sumOFLength/wordCount) << ".\n";
	inStream.close();
}
void CopyCountPrint(istream& cin, string line)
{
	string result("");
	int wordCount = 0; 
	double sumOFLength = 0;
	while(getline(cin, line))
	{
		string word("");
		for (int i=0; i<line.length();i++)
		{
			if (isalpha(line.at(i)))
			word += line.at(i);
			
			if (!isalpha(line.at(i)))
			{
				if (word.length()>0)
				{
					wordCount++;
					sumOFLength += word.length();
				}
				
				result += word;
				result += line.at(i);
				word = "";
			}
		}
	}
	cout << "The string of text:\n";
	cout << "\"" << result << "\"" << endl;
	cout << "The text contains " << wordCount << " words "
		 << "with the average length of words being " << (sumOFLength/wordCount) << ".\n"; 
}
