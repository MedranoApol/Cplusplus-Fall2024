//Apol Medrano
//HW5 Searching Q1
//randomly puts 0s & 1s in array & finds first max of rows & collumns
#include <iostream>
#include <cstdlib>	//random number generator
#include <time.h>	//time
#include <iomanip> //setw
using namespace std;

const int index1SIZE = 4, index2SIZE = 4;
//declares the size of arrays as global variables
void fillArray (int Rand[][index2SIZE]);
//takes in array
//fills in array with randomly generated 1s and 0s
void findRowsSum (const int Rand[][index2SIZE], int Rows[]);
//takes in array searches each row of
//adds up each value within a row puts them in another array
void findCollumnsSum (const int Rand[][index2SIZE], int Collumns[]);
//takes in array searches each collumn of
//adds up each value within a collumn puts them in another array
void PrintResults (int Rand[][index2SIZE], int Rows[], int Collumns[]);
//takes all the arrays in the program
//prints the results to user in the output of the program
void firstMax (int Rows[], int Collumns[]);
//takes in the row and collumn arrays
//finds the first largest collumn/row in the array
int main ()
{
	int Rand[index1SIZE][index2SIZE], Rows[index1SIZE], Collumns[index2SIZE];
	
	fillArray (Rand); 		//rand array filled
	findRowsSum(Rand, Rows); 		//rows array filled
	findCollumnsSum(Rand, Collumns); 		//collum array filled
	PrintResults(Rand, Rows, Collumns); 		//results coded to print to user
}

void fillArray (int Rand[][index2SIZE])
{	//makes sure that there a is a new random number generated
	srand(time(0));
	for (int index1 = 0; index1 < index1SIZE; index1++)
	{
		for (int index2 = 0; index2 < index2SIZE; index2++)
		{	//generates random number between 0 and 1
			Rand[index1][index2] = rand() % 2; 
		}
	}	
}

void findRowsSum (const int Rand[][index2SIZE], int Rows[])
{ //index1 has index2 nested, so a row is being seached for every value within it
	for (int index1 = 0; index1 < index1SIZE; index1++)
		{ 
			int sum = 0; //restarts sum value after values within row end
			for (int index2 = 0; index2 < index2SIZE; index2++)
			{	//adds up the values with in a row
				sum += Rand[index1][index2];
				Rows[index1] = sum;
				//saves sum value of row to Rows array
			}
		}
}
void findCollumnsSum (const int Rand[][index2SIZE], int Collumns[])
{//index2 has index2 nested, so a collumn is being seached for every value within it
	for (int index2 = 0; index2 < index2SIZE; index2++)
		{
			int sum = 0; //restarts sum value aftere
			for (int index1 = 0; index1 < index1SIZE; index1++)
			{ //adds up the values in a collumn
				sum += Rand[index1][index2];
				Collumns[index2] = sum;
			} //saves sum value of row to Collumns array
		}
}

void PrintResults (int Rand[][index2SIZE], int Rows[], int Collumns[])
{ 
	cout << "Randomly Generated 0s & 1s" << endl;
	for (int index1 = 0; index1 < index1SIZE; index1++)
	{
		cout << setw(10);
		for (int index2 = 0; index2 < index2SIZE; index2++)
		{
			cout << Rand[index1][index2] << setw(2);
		}
		cout << endl;
	}
	cout << endl;
	firstMax (Rows,Collumns); //prints first max of each
}	

void firstMax (int Rows[],int Collumns[])
{
	int max = Rows[0], maxLocation = 0; 
	//starts loop off with a max so it can work properly
	for (int index1 = 1; index1 < index1SIZE; index1++)
		{
			if (max < Rows[index1]) //if another row larger
			{ //it will become new max and mark a new maxLocation
				max = Rows[index1];
				maxLocation = index1;
			}
		}
	cout << "The largest row that shows up first is Row " << (maxLocation + 1)
		 << "." << endl; 		//must raise location by so it makes sense to user
								//ex: Row 0 wouldn't make sense to every user
	max = Collumns[0];
	maxLocation = 0;
	//same process as before but for collumn array
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
