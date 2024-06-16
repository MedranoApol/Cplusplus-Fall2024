//Apol Medrano
//HW5 General Q1
//Find the zeros in 2-D array
#include <iostream>
using namespace std;

const int index1SIZE= 4, index2SIZE = 3;
//sets data indexes as global constants, so it can easily be used throughout program
int Search(int a[][index2SIZE]);
//takes 2-D array, searches for amount of zeros within it
//returns the zero count to main 

int main()
{
	int data[index1SIZE][index2SIZE] = {2,0,1,3,4,3,0,0,0,7,0,3}; //the 2-D array values
	
	cout << endl << "The number of zeros that are in this two-dimensional array is "
		 << Search(data) << "." << endl; //displays to the user the amount of zeros
	return 0;							//that are in the 2-D array
}
int Search(int a[][index2SIZE])
{
	int ZeroCount = 0;
	for (int index1 = 0; index1 < index1SIZE; index1++)//loops through index1
	{
		for (int index2 = 0; index2 < index2SIZE; index2++)//loops through index2 
		{
			cout << a[index1][index2] << ", "; //displays sequence to user
			if (0 == a[index1][index2])//counts the amount of zero that appear
			ZeroCount++; //everytime the program loops to a new 2-D array index
		}
	}
	return ZeroCount;
}
