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
	char next;
	int wordCount = 0;
	int articleCount = 0;
	
	cout << "The text:" << endl; //shows what is in file to user
	inStream.get(next); 
	while (! inStream.eof()) //will loop until there is nothing to read in file
	{
		cout << next; //takes symbol from inStream displays it to screen
		inStream.get(next); //grabs next character and loops
	}
	
	cout << endl;
	inStream.close( );
	
	inStream.open("question1.txt");
//start looping lines in the file
	while(getline (inStream, line))
	{
		//loop through each character
		string word = "";
		for(int i=0; i<line.length(); i++)
		{
			char letter = line.at(i);
			word += tolower(letter);//makes text lowercase to make finding articles easer
			if(letter == ' ')//spaces marks the end of a work
			{
				wordCount++;//word count goes up if space
				if (word == "the "||word == "an "|| word == "a ")
				{
					articleCount++;
				}
				word = "";
			}
		}
		if(word.length()>0) //makes sure all words and articles are caught
		{
			wordCount++;
			if (word == "the "||word == "an "|| word == "a ")
			{
				articleCount++;
			}
		word = "";
		}
	}
	cout << "Text contains " << wordCount << " words of which " << articleCount << " are articles.\n";
}
