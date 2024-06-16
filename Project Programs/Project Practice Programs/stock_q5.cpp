#include <iostream>
#include <string>
#include "stock.h"
using namespace std;

int main(){
	int ARRAY_SIZE;
	
	cout << "Enter the number of items you wish to input: ";
	cin >> ARRAY_SIZE;
	
	Stock* store = new Stock[ARRAY_SIZE];
	
	for (int i=0; i < ARRAY_SIZE; i++){
		cout << "Enter food item " << (i+1) << "'s name, quantity, and price:\n";
		cin >> store[i];
	}
	cout << "\n";
	for (int i=0; i< ARRAY_SIZE; i++){
		cout << "Food item " << (i+1) << ":\n";
		cout << store[i];
	}
	delete [] store;
	return 0;
}
