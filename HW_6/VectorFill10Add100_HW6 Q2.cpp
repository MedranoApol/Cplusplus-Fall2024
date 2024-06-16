//HW6 Q2 Apol Medrano
//list with vectors, enter 10 values, keep 5 open, add 100 to values
#include <iostream>
#include <vector>
using namespace std;

void FillVector (vector<int>& vect);
//takes vector
//returns vector filled with user inputed values
void addHundred (vector<int> vect);
//takes vector
//adds 100 to all values and prints to screen

int main()
{	//intializes vector size to 15
	vector<int> vect(15); //sets values to zero
	FillVector(vect); 
	cout << "The numbers are now:\n";
	addHundred(vect);
	return 0;
}
void FillVector (vector<int>& vect)
{
	int next;
	
	cout << "Enter a list of 10 positive numbers.\n"
	<< "Place a negative number to end list before 10.\n";
	cin >> next;
	for (unsigned int index = 0; index < 10; index++)
	{	//only fills vector to vect[9]
		if (next < 0)
		break; //option to let user end list
		//if they enter a negative number
		vect[index] = next;
		cin >> next;
	}
}
void addHundred (vector<int> vect)
{
	for (unsigned int index = 0; index <vect.size( ); index++)
	{
		vect[index] += 100; //adds 100 to all values within vect
		cout << vect[index] << " ";
	} 	//prints the vector value to screen
	cout << endl;
}
