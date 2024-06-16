//HW4 Q5
//Apol Medrano
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void swapValues (int& firstPar, int& secondPar, int& thirdPar);
//gets numbers, and returns them swapped in a predetermined order

int main( )
{
	int first, second, third;
	ifstream inStream;
	ofstream outStream;
	
	inStream.open("Question_5_numbers.txt");
	if (inStream.fail( ))//in case input file is corrupted
	{					// or accidently deleted
		cout << "Input file opening failed.\n";
		exit(1);
	}
	outStream.open("SwappedQuestion_5_numbers.txt");
	if (outStream.fail( ))//in case output file is corrupted
	{					 // or accidently deleted
		cout << "Output file opening failed.\n";
		exit(1);
	}
	
	inStream >> first >> second >> third;
	swapValues(first, second, third);
	
	outStream << first << " " << second << " " << third;
	inStream.close( );
	outStream.close( );
	return 0;
}
void swapValues(int& firstPar, int& secondPar, int& thirdPar)
{
	int temp;
	
	temp = firstPar;
	firstPar = secondPar;
	secondPar = thirdPar;
	thirdPar = temp;
}
