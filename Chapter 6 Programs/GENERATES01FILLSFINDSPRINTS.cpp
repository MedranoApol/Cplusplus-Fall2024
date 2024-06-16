#include <iostream>
#include <cstdlib>	//random number generator
#include <time.h>	//time
#include <iomanip> //setw
using namespace std;

const int index1SIZE = 4, index2SIZE = 4;

void fillArray (int Rand[][index2SIZE]);

void findRowsSum (const int Rand[][index2SIZE], int Rows[]);

void findCollumnsSum (const int Rand[][index2SIZE], int Collumns[]);

void PrintResults (int Rand[][index2SIZE], int Rows[], int Collumns[]);

void firstMax (int Rows[], int Collumns[]);

int main ()
{
	int Rand[index1SIZE][index2SIZE], Rows[index1SIZE], Collumns[index2SIZE];
	
	fillArray (Rand);
	findRowsSum(Rand, Rows);
	findCollumnsSum(Rand, Collumns);
	PrintResults(Rand, Rows, Collumns);
}

void fillArray (int Rand[][index2SIZE])
{
	srand(time(0));
	for (int index1 = 0; index1 < index1SIZE; index1++)
	{
		for (int index2 = 0; index2 < index2SIZE; index2++)
		{
			Rand[index1][index2] = rand() % 2;
		}
	}	
}

void findRowsSum (const int Rand[][index2SIZE], int Rows[])
{
	for (int index1 = 0; index1 < index1SIZE; index1++)
		{
			int sum = 0;
			for (int index2 = 0; index2 < index2SIZE; index2++)
			{
				sum += Rand[index1][index2];
				Rows[index1] = sum;
				
			}
		}
}
void findCollumnsSum (const int Rand[][index2SIZE], int Collumns[])
{
	for (int index2 = 0; index2 < index2SIZE; index2++)
		{
			int sum = 0;
			for (int index1 = 0; index1 < index1SIZE; index1++)
			{
				sum += Rand[index1][index2];
				Collumns[index2] = sum;
			}
		}
}

void PrintResults (int Rand[][index2SIZE], int Rows[], int Collumns[])
{
	cout << "Randomly Generated 0s & 1s" << setw(15) << "Sum of Rows" << endl;
	for (int index1 = 0; index1 < index1SIZE; index1++)
	{
		cout << setw(10);
		for (int index2 = 0; index2 < index2SIZE; index2++)
		{
			cout << Rand[index1][index2] << setw(2);
		}
		cout << setw(20) << Rows[index1];
		cout << endl;
	}
	cout << endl << "     " << "Sum of Collumns" << endl;
	cout << setw(10);
	for (int index2 = 0; index2 < index2SIZE; index2++)
		{
			cout << Collumns[index2] << " ";
		}
	cout << endl << endl;
	firstMax (Rows,Collumns);
}

void firstMax (int Rows[],int Collumns[])
{
	int max = Rows[0], maxLocation = 0;
	
	for (int index1 = 1; index1 < index1SIZE; index1++)
		{
			if (max < Rows[index1])
			{
				max = Rows[index1];
				maxLocation = index1;
			}
		}
	cout << "The largest row that shows up first is Row " << (maxLocation + 1)
		 << "." << endl; 
	
	max = Collumns[0];
	maxLocation = 0;
	
	for (int index2 = 1; index2 < index2SIZE; index2++)
		{
			if (max < Collumns[index2])
			{
				max = Collumns[index2];
				maxLocation = index2;
			}
		}
	cout << "The largest collumn that shows up first is Collumn " << (maxLocation + 1)
		 << "." << endl; 	
}
