//HW3 Q2
//Apol Medrano
#include <iostream>
using namespace std;

void order(int numberPar1, int numberPar2, int numberPar3);
//find the max and min of 3 numbers

int main ()
{
	int num1, num2, num3;
	
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Number 3: ";
	cin >> num3;
	
	order(num1, num2, num3);

}

void order(int numberPar1, int numberPar2, int numberPar3)
{
	int min = numberPar1, max = numberPar1;
	
	//find min
	if (min > numberPar2)
		min = numberPar2;
	if (min > numberPar3)
		min = numberPar3;
	cout << "The mininum number is: " << min << endl;
	
	//find max
	if (max < numberPar2)
		max = numberPar2;
	if (max < numberPar3)
		max = numberPar3;
	cout << "The maximum number is: " << max << endl;
}
