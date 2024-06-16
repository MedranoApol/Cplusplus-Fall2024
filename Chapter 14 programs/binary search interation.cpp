//Program to demonstrate the recursive function for binary search.
#include <iostream>
using namespace std;

void fillArray(int a[], int ARRAY_SIZE);
//user inputs values into array
void sortArray(int a[], int ARRAY_SIZE);
//sorts an array in increasing order
void search(const int a[], int first, int last,	int key, bool& found, int& location);
//Precondition: a[first] through a[last] are sorted in increasing order.
//Postcondition: if key is not one of the values a[first] through a[last],
//then found == false; otherwise, a[location] == key and found == true.

int main(){
	int key, location, ARRAY_SIZE;
	bool found;
	cout << "Enter the amount of numbers you wish to input: ";
	cin >> ARRAY_SIZE;
	
	int* a = new int[ARRAY_SIZE];
	const int finalIndex = ARRAY_SIZE - 1;
	cout << "Enter the numbers: ";
	fillArray(a, ARRAY_SIZE);
	
	cout << "Enter number to be located: ";
	cin >> key;
	sortArray(a, ARRAY_SIZE);
	search(a, 0, finalIndex, key, found, location);

	if (found)
		cout << key << " is in index location " << location << "\n";	
	else
		cout << key << " is not in the array." << "\n";
	
	return 0;
}
void fillArray(int a[], int ARRAY_SIZE)
{
	for (int i=0; i < ARRAY_SIZE; i++)
		cin >> a[i];
}
void sortArray(int a[], int ARRAY_SIZE)
{
	for (int i=0; i<ARRAY_SIZE; i++){
		for (int j=i + 1; j< ARRAY_SIZE; j++){
			if (a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				j-=1;
			}
		}
	}
}
void search(const int a[], int first, int last, int key, bool& found, int& location)
{
	int mid;
	while(true)
	{
		if (first > last){
			found = false;
			return;
		}else{
		mid = (first + last)/2;
	
			if (key == a[mid]){
				found = true;
				location = mid;
				return;
			} else if (key < a[mid]){
				last = mid-1;
			}else if (key > a[mid]){
				first = mid +1;
			}
		}
	}
}
