#include <iostream>
#include <string>
using namespace std;
int main() {
	string line;
	string word("rd");
	cout << "Enter a line: ";
	getline(cin, line);
	cout << line.find(word);
	return 0;
}

