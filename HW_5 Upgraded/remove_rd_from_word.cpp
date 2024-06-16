//HW5 General Q2 Apol Medrano
#include <iostream>
#include <string>
using namespace std;
// Function to define a word the user inputs
string removeSequence(string word) {
    string result = "";
    int length = word.length();

// process to remove 'rd' sequence from a word
    for (int i = 0; i < length; i++) {
        if (i < length - 1 && word[i] == 'r' && word[i + 1] == 'd') {
            i++; 
        } else {
            result += word[i];
        }
    }
	return result;
}

// what the user will see on their end. 
int main() {
    string inputWord;
    
    cout << "Enter a word: ";
    cin >> inputWord;
    string result = removeSequence(inputWord);
    cout << "Word after removing 'rd': " << result << endl;
    return 0;
}

