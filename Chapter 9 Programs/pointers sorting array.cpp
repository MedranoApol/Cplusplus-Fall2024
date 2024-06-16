#include <iostream>
#include <cstdlib>
#include <cstddef>
using namespace std;

typedef int* IntArrayPtr;

void fill_array (int a[], int size);

void sort (int a[], int size);

void swap_values (int& v1, int& v2);

int main()
{
	cout << "Sort number form smallest to largest" << endl;
	int array_size;
	cout << "How many numbers to insert: ";
	cin >> array_size;
	
	IntArrayPtr a;
	a = new int[array_size];
	
	fill_array(a, array_size);
	sort (a, array_size);
	
	cout << "array sorted: \n";
	for (int index = 0; index < array_size; index++)
	cout << a[index] << endl;
	
	delete []a;
	
	return 0;
}
void fill_array (int a[], int array_size)
{
	cout << "Enter numbers one by one until reach your size limit.\n";
	for (int index = 0; index < array_size; index++)
	{
		cout << "Number " << index+1 <<  " is ";
		cin >> a[index];	
	}
}
void sort (int a[], int array_size)
{
	for (int index = 0; index < array_size; index++)
	{
		if (a[index] > a[index+1])
		swap_values (a[index], a[index+1]);
	}
}
void swap_values (int& v1, int& v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}
