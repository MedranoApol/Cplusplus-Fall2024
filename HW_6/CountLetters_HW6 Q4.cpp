//HW6 Q4 Apol Medrano
//sort letters of string from file
//print number of letter occurence
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;
void SortLetters (string& result);
//takes in string and sorts them alphabetic order
//using bubblesort method
void NumberOfLetters (const string result);
//counts the number of letters, saves letter and amount of letter to array
void PrintArray (char Letter[], int LetterCount[], int LetterLocation);
//prints a letter and the amount of times it shows up in the text
void SortArray (char Letter[], int LetterCount[], int LetterLocation);
//takes in two arrays and sorts them in descending order
int main ()
{	//opens file
	ifstream InStream("Q4text.txt"); 
	string line, wholeText, result; 
	cout << "Text From File:\n";
	while(!InStream.eof()) //makes sure entireity of file is read
	{
		getline(InStream,line);//gets text from file turns it into string
		for (int index = 0; index < line.length(); index++)
		{
			char letter = tolower(line[index]);
			if (isalpha(letter))
			{
				result += letter; 
			} //save letters to string
			else
			{
				result += ""; //every not letter is ommitted, just need letter
			}	
		}
		cout << line << endl; //prints file to users
	}
	SortLetters(result);			  
	NumberOfLetters(result);
	return 0;
}
void SortLetters (string& result)
{ //sorts letters using bubble sort method 
	for (int i = result.length()-1; i > 0; i--)
		for (int index = 0; index < i; index++)
			if (result[index] > result[index+1])
			{
			// Swap the numbers
			int temp = result[index+1];
			result[index+1] = result[index];
			result[index] = temp;
			}
}
void NumberOfLetters(const string result)
{ //saves the letters that show up in text to an array called letter
	char Letter[26]; //saves the amount of time they show up in the text
	int LetterCount[26]; //to an array called LetterCount
	int WordCount = 1;
	int LetterLocation = 0;
	for (int index = 1; index < result.length()+1; index++)
	{
		char letter = result[index];
			if (result[index-1] == letter)//old index number must be equal to new one
			{
				WordCount++; //if so it causes the consecutive count to go up
			}
			else
			{
				Letter[LetterLocation] = (result[index-1]);
				LetterCount[LetterLocation] = WordCount;
				LetterLocation++;
				WordCount = 1; //so if a streak ends, it goes back to zero					
			}		//instead of stacking when a new streak begins
	}
	cout << endl;
	PrintArray(Letter,LetterCount,LetterLocation);
}
void PrintArray (char Letter[], int LetterCount[], int LetterLocation)
{	
	SortArray (Letter,LetterCount,LetterLocation);
	for (int index = 0; index < LetterLocation; index++)
	{ 
		cout << Letter[index] << " " << LetterCount[index] << endl;
	} 	//prints the array values to screen
	cout << endl;
}
void SortArray (char Letter[], int LetterCount[], int LetterLocation)
{//sorts letters using altered bubble sort method 
	for (int i = 0; i < LetterLocation; i++)
		for (int index = 0; index < i; index++)
			if (LetterCount[i] > LetterCount[index])
			{
			// Swap the numbers
			int temp = LetterCount[i];
			int temp2 = Letter[i];
			LetterCount[i] = LetterCount[index];
			Letter[i] = Letter[index];
			LetterCount[index] = temp;
			Letter[index] = temp2;
			}
}
