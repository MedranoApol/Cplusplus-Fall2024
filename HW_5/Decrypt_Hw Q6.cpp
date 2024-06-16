//Apol Medrano
//HW5 Cryptography
//takes ciphered text and prints
//prints amount letters in ciphered text
//prints out deciphered text
#include <iostream>
#include <string>
#include <cctype> //toupper 
#include <fstream> //file opening
using namespace std;

void SortLetters (string& Decrypted);
//takes in string and sorts them alphabetic order
//using bubblesort method
void NumberOfLetters (const string Decrypted);
//counts the number of letters

int main ()
{	//open files that contains encrypted text
	ifstream InStream("Encrypted.txt"); 
	string textFromFile, PlainText, DeLetterCount, Encrypted;
	
	do { //gets text from file turns it into string
		getline(InStream,textFromFile);
		for (int index = 0; index < textFromFile.length(); index++)
		{
			char letter = toupper(textFromFile[index]);
			if (letter != ' ')
			{
				Encrypted += letter;
				DeLetterCount += letter; 
				PlainText += char(int(letter - 8 + 65 )% 26 + 65);
			} //formula to turn encrypted to decrypted text
			else
			{
				Encrypted += letter;
				DeLetterCount += ""; //every space in text is ommited to make sorting later easier
				PlainText += " "; //every space in text appears in final text
			}
		}
	} while (!InStream.eof());
		cout << "                             Encrypted Text: \n" << Encrypted << endl << endl;
		SortLetters(DeLetterCount);			  
		NumberOfLetters(DeLetterCount);
		cout << endl << "                           Plaintext Message: \n" << PlainText;
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
void NumberOfLetters (const string DeLetterCount)
{
	cout << "                            Letter     Count\n";
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
				cout << "                         [    " << DeLetterCount[index-1] 
					 << "    ][    " << WordCount << "    ]\n";
				WordCount = 1; //so if a streak ends, it goes back to zero					
			}		//instead of stacking when a new streak begins
	}
}
	

