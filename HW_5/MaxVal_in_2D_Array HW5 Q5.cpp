//Apol Medrano
//HW5 Searching Q2
//finds largest element in a 3x4 array
#include <iostream>
#include <cstdlib>	//random number generator
#include <time.h>	//time
#include <iomanip> //setw
using namespace std;

const int index1SIZE = 3, index2SIZE = 4;
//declares the size of arrays as global variables
void fillArray (int Rand[][index2SIZE]);
//takes in array
//fills in array with randomly generated number between 10 and 99
void PrintResults (int Rand[][index2SIZE]);
//takes in the array
//prints the results to user in the output of the program
void locationOfLarge(int Rand[][index2SIZE]);
//takes in array
//finds the exact location of the largest element
int main ()
{
	int Array [index1SIZE][index2SIZE];
	
	fillArray (Array); 		//array filled
	PrintResults(Array); 	//results coded to print to user
}

void fillArray (int Array[][index2SIZE])
{	//makes sure that there a is a new random number generated
	srand(time(0));
	for (int index1 = 0; index1 < index1SIZE; index1++)
	{
		for (int index2 = 0; index2 < index2SIZE; index2++)
		{	//generates random number between 0 and 99
			Array[index1][index2] = rand() % 100; 
		}
	}
		
}

void findLargeLocation (const int Array[][index2SIZE])
{
	int max = Array[0][0], maxRowLocation = 0, maxCollumnLocation = 0;
	
	for (int index1 = 0; index1 < index1SIZE; index1++)
		{
			for (int index2 = 0; index2 < index2SIZE; index2++)
			{ 
				if (max < Array[index1][index2])
				{
					max = Array[index1][index2];
					maxRowLocation = index1;
					maxCollumnLocation = index2;
				}
			} 
		}
	cout << "The largest element is at Row " << (maxRowLocation + 1)
		 << " and at Collumn " << (maxCollumnLocation + 1) << ".";	
}

void PrintResults (int Array[][index2SIZE])
{ 
	cout << "Randomly Generated Numbers" << endl;
	for (int index1 = 0; index1 < index1SIZE; index1++)
	{
		cout << setw(10);
		for (int index2 = 0; index2 < index2SIZE; index2++)
		{
			cout << Array[index1][index2] << " ";
		}
		cout << endl;
	}
	cout << endl;
	findLargeLocation (Array);
}	
