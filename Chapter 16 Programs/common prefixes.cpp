#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

string onlyAlpha (string line){
	string result;
	for (int i = 0; i < line.length(); i++){
		if (isalpha(line[i]))
			result += line[i];
	}
	return line;
}

string getPrefix (string string1, string string2){
	string prefix;
	int location;
	string s1 = onlyAlpha(string1);
	string s2 = onlyAlpha(string2); 
	if (s1.length() >= s2.length())
		location = s1.find_first_not_of(s2, 0);
	else
		location = s2.find_first_not_of(s1, 0);
	if (location < 0){
		cout << "No instance of common prefixes.\n";
		exit(1);
	} else {
		for (int i= 0; i <= location; i++)
			prefix += s1[i];
	}
	return prefix;
}

int main(){
	string s1, s2;
	cout << "Enter string 1: ";
	getline(cin, s1);
	cout << "\nEnter string 2: ";
	getline(cin, s2);
	string commonPrefix = getPrefix(s1, s2);
	cout << "\nCommon Prefix: " << commonPrefix;
	return 0;
}
