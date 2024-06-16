#include <iostream>
using namespace std;
int main()
{
	int num1, num2, sequence_length, temp_number;
		
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	do
	{
		cout << "How many elements would you like the sequence to have?" << " (3 or more please)" << endl;
		cin >> sequence_length;
		cout << endl;
	
	if (sequence_length < 3)
		cout << "Invalid number, please re-enter the sequence value." << endl << endl; 
	} while (sequence_length < 3);
	
	int new_number = num1 + num2;
	
	if (num1 > num2)
	{
		cout << num2 << ", " << num1 << ", " << new_number;
		temp_number = num1;
	}
	if (num2 > num1)
	{
		cout << num1 << ", " << num2 << ", " << new_number;
		temp_number = num2;
	}
	for (int i=3; i < sequence_length; i++)
	{	
		int placeholder;
		
		placeholder = temp_number + new_number;
		cout << ", " << placeholder;
		temp_number = new_number;
		new_number = placeholder;	
	}
	cout << "." << endl << endl << "Thank you!" << endl;
	return 0;
}
