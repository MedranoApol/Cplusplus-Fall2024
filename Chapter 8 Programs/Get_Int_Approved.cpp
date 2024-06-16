#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
void readAndClean(int& n);
//Reads a line of input. Discards all symbols except the digits. Converts
//the C string to an integer and sets n equal to the value of this integer.
void newLine();
//Discards all the input remaining on the current input line.
//Also discards the '\n' at the end of the line.
void getInt(int& inputNumber);
//Gives inputNumber a value that the user approves of.
int main()
{
	int inputNumber;
	getInt(inputNumber);
	cout << "Final value read in = " <<inputNumber<<endl;
	return 0;
}
//Uses iostream and readAndClean:
void getInt(int& inputNumber)
{
	char ans;
	do
	{
		cout << "Enter input number: ";
		readAndClean(inputNumber);
		cout << "You entered " <<inputNumber
		<< " Is that correct? (yes/no): ";
		cin >> ans;
		newLine( );
	} while ((ans != 'y') && (ans != 'Y'));
}
//Uses iostream, cstdlib, and cctype:
void readAndClean(int& n)
{
	const int ARRAY_SIZE = 6;
	char digitString[ARRAY_SIZE];
	
	char next;
	cin.get(next);
	int index = 0;
	while (next != '\n')
	{
		if ((isdigit(next)) && (index < ARRAY_SIZE - 1))
		{
		digitString[index] = next;
		index++;
		}
		cin.get(next);
	}
	digitString[index] = '\0';
	n = atoi(digitString);	
}
//Uses iostream:
void newLine()
{
	char symbol;
	do
	{
	cin.get(symbol);
	} while (symbol != '\n');
}
