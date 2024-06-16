#include <iostream>
#include <vector>
int main(){
	std::vector<int> vect(15);
	
	std::cout << "Enter 15 numbers: ";
	for (unsigned int i = 0; i < vect.size(); i++){
		std::cin >> vect[i];
	}
	for (unsigned int i = 0; i < vect.size(); i++){
		std::cout << vect[i] << " ";
	}
	std::cout << "\n";
	return 0; 
}
