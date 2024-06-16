#include <iostream>
#include <string>
#include <cctype> //toupper 
#include <fstream> //file opening
#include <vector>
using namespace std;
void SortLetters (string& Decrypted);
//takes in string and sorts them alphabetic order
//using bubblesort method
void NumberOfLetters (const string Decrypted);
//counts the number of letters
void PrintVector (vector<char> Letter, vector<int> LetterCount);

int main ()
{	//open files that contains encrypted text
	ifstream InStream("Q4text.txt"); 
	string Decrypted, PlainText, DeLetterCount; 
	
	(getline(InStream,Decrypted)); //gets text from file turns it into string
		for (int index = 0; index < Decrypted.length(); index++)
		{
			char letter = toupper(Decrypted[index]);
			if (isalpha(letter))
			{
				DeLetterCount += letter; 
				PlainText += char(int(letter - 8 + 65 )% 26 + 65);
			} //formula to turn encrypted to decrypted text
			else
			{
				DeLetterCount += ""; //every space in text is ommited to make sorting later easier
				PlainText += " "; //every space in text appears in final text
			}
		}
		cout << "                             Encrypted Text: \n" << Decrypted << endl << endl;
		SortLetters(DeLetterCount);			  
		NumberOfLetters(DeLetterCount);
}
void SortLetters (string& DeLetterCount)
{ //sorts letters using bubble sort method 
	for (int i = DeLetterCount.length()-1; i > 0; i--)
		for (int index = 0; index < i; index++)
			if (DeLetterCount[index] > DeLetterCount[index+1])
			{
			// Swap the numbers
			int temp = DeLetterCount[index+1];
			DeLetterCount[index+1] = DeLetterCount[index];
			DeLetterCount[index] = temp;
			}
}
void NumberOfLetters(const string DeLetterCount)
{
	vector<char> Letter;
	vector<int> LetterCount;
	int WordCount = 1;
	for (int index = 1; index < DeLetterCount.length()+1; index++)
	{
		char letter = DeLetterCount[index];
			if (DeLetterCount[index-1] == letter)//old index number must be equal to new one
			{
				WordCount++; //if so it causes the consecutive count to go up
			}
			else
			{
				Letter.push_back(DeLetterCount[index-1]);
				LetterCount.push_back(WordCount);
				WordCount = 1; //so if a streak ends, it goes back to zero					
			}		//instead of stacking when a new streak begins
	}
	cout << endl;
	PrintVector(Letter,LetterCount);
}
void PrintVector(vector<char> Letter, vector<int> LetterCount)
{
	for (unsigned int index = 0; index <Letter.size( ); index++)
	{ //adds 100 to all values within vect
		cout << Letter[index] << " " << LetterCount[index] << endl;
	} 	//prints the vector value to screen
	cout << endl;
}
