//HW6 Q3 Apol Medrano
//replaces 4 lettered words in string to "love"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main ()
{
	char ans;
	string line;
	cout << "Enter anything you'd like:\n";
	getline(cin, line);
	do
	{
		string result("");
		string word("");
		line += " ";
		for (int i=0;i<line.length();i++)
		{
			char letter = line.at(i);
			if (isalpha(letter))
			word += letter;
			if (!isalpha(letter)) 
			{
				if (word.length() == 4)
				{
					if (isupper(word[0]))
					word = "Love";
					else 
					word = "love";
				}
				result += word;
				result += letter;
				word = "";
			}
		}
		cout << result << endl;
		cout << "Retry? Y for yes, N for no.\n";
		cin >> ans;
		if ((ans == 'Y')||(ans == 'y'))
		{
			cout << "Enter anything you'd like:\n";
			cin.ignore();
			getline(cin, line);
		}
	} while ((ans == 'Y')||(ans == 'y'));
	return 0;
}
