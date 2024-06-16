//HW4 Q6
//Apol Medrano
#include <fstream>
#include <iostream>
using namespace std;
int main( )
{
	ifstream inStream("tes.txt");
	double number, total = 0;
	int amountOfNumbers;
	
	//extracts numbers from file
	cout << "The numbers from \"tes.txt\" are: " << endl;
	while (inStream >> number)
	{
		cout << number << endl;
		total += number;
		amountOfNumbers++;
	}	
	
	cout << "The average of these numbers is " 	//displays the average of the numbers to the user
		 << (total/amountOfNumbers) << endl;
	
	inStream.close( );

	return 0;
}

