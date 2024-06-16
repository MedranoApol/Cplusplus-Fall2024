#include <iostream>
#include <cctype>
#include <string>

std::string removeNumbers (const std::string& str1){
	std::string str2 = "";
	str2 += str1[0];
	for (int i = 1; i < str1.length(); i++){
		if (isdigit(str1[i]))
			continue;
		if (str1[i] == ' ' && isdigit(str1[i-1]))
			continue;
		str2 += str1[i];
	}
	return str2;
}


int main(){
	std::string text;
	std::cout << "Enter string: ";
	std::getline(std::cin, text);
	std::cout << "\nText without digits: \n";
	std::cout << (removeNumbers(text));
	std::cout << "\n";
	return 0;
}
