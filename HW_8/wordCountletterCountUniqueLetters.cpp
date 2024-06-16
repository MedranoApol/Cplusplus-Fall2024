#include <iostream>
#include <string>
#include <cctype>
using std::cout; using std::cin; using std::endl; using std::string;

string lettersOnly(string theString){
	string allLetters("");
	char letter;
    for (int i = 0; i < theString.length(); i++)
    {
        if(isalpha(theString[i]))
            allLetters += tolower(theString[i]);
    }
    return allLetters; 
}

int wordsInString (string theString){
    int wordCount=0, i;
    theString += " ";
    for (i = 0; i < theString.length(); i++)
    {
        if(isspace(theString[i]))
            wordCount++;
    } 
    return wordCount;
}

void sortLetters(string& theString){
    for (int i=0; i < theString.length(); i++)
    {
        for (int j=i+1; j < theString.length()-1-i; j++)
        {
            if (theString[i]>theString[j])
            {
                char temp = theString[i];
                theString[i] = theString[j];
                theString[j] = temp;    
            }
        }
	}
    return;
}
int amountOfUniqueLetter(string theString){
	int arraySize = 0;
    char temp = theString[0];
    theString += " ";

    for(int i=1; i < theString.length(); i++){
        if(temp != theString[i])
            arraySize++;
        temp = theString[i];
	}
    return arraySize;	
}
int* amountOfEachLetter(string theString){
    static int a[26];
	int letterCount = 1, arrayIndex = 0, arraySize = 0;
    char temp = theString[0];
    theString += " ";

    for(int i=1; i < theString.length(); i++){
        if(temp == theString[i])
            letterCount++;
        else{
            a[arrayIndex] = letterCount;
            arrayIndex++;
            letterCount = 1;
        }  
        temp = theString[i];
    }
    
    return a;
}
string NoMoreDuplicates(string theString){
    string letter("");
    char temp = theString[0];
    theString += " ";
    for(int i=1; i < theString.length()+1; i++){
        if(temp != theString[i])
            letter += temp;
        temp = theString[i];
    }
    return letter;
}

void outputString (string theString, int* uniqueLetterCount, int arraySize){
	cout << "\n";
    for (int i=0; i < arraySize; i++)
        cout << uniqueLetterCount[i] << " " << theString[i] << "\n";
}

int main()
{
    string line;
    cout << "Enter a line of text: \n";
    getline(cin,line);
	
    int wordCount = wordsInString(line);
    cout << "\n" << wordCount << " word(s).\n";
    string result = lettersOnly(line);
    sortLetters(result);
    int* numberOfLetter = amountOfEachLetter (result);
    result = NoMoreDuplicates(result);
    int arraySize = amountOfUniqueLetter (result);
    outputString(result, numberOfLetter, arraySize);
    
    delete numberOfLetter;
    return 0;
}
