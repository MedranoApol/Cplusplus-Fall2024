#include <map>
#include <iostream>
#include <string>

int main(){
	std::map<std::string, int> person_age;
	person_age["Apol"] = 21;
	person_age["Nati"] = 21;
	person_age["Colton"] = 23;
	
	
	for (std::map<std::string, int>::iterator it= person_age.begin(); it != person_age.end(); it++){
		std::cout << "name: " << it->first << "   age: " << it->second << "\n";
	}
	
	return 0;
}
