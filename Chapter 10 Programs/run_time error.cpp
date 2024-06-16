#include <iostream>
#include <stdexcept>
using namespace std;

int quotient(int number1, int number2){
	if (number2 == 0)
		throw runtime_error("Division cannnot be zero");
	return number1/number2;
}
int main(){
	cout << "Enter 2 int: ";
	int number1, number2;
	cin >> number1 >> number2;
	try{
		int result = quotient(number1, number2);
		cout << number1 << "/" << number2 << " is " << result << "\n";
	}catch (runtime_error& ex){
		cout << ex.what() << "\n";
	}
	cout << "Execution continues";
	return 0;
}
