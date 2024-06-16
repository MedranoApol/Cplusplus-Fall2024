//Project Q12 Apol Medrano
//decrypts encrypted line using all keys from 1 to 100
#include <iostream>
#include <string>
using namespace std;

void Decode(string line);
//takes a encrypted line
//decodes line by decoding using all keys from 1 to 100;

void output(string line,int key);
//outputs decoded line with the key number used

int main()
{
	string line;
	
	cout << "Enter encrypted line of text: ";
	getline(cin,line);	
	Decode(line);
	return 0;
}
void Decode(string line)
{
	string result("");	
	string word("");
	string decrypt;
	for (int key = 1; key <= 100; key++)
	{
		for (int i=0;i<line.length();i++)
		{
			char letter = line.at(i);
		
			if ((32-((int(letter)-key) + 127) + key) > 126)
			decrypt = char((32-((int(letter)-key) + 127)) % 95 + 32);
			else
			decrypt = char((int(letter) - key) % 95 + 32);
			
			if  ((int(decrypt[0]) < 32) || (int(decrypt[0]) > 127))
			decrypt = "";
			else
			word += decrypt;
		
		}	
		output(word, key);
		word = "";
	}
}
void output(string line, int key)
{
	cout << key << ". " << line << endl;
}
