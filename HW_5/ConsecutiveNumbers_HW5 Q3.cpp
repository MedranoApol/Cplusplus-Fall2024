//Apol Medrano
//HW 5 Pattern Recognition
//Finds four consecutive numbers 
#include <iostream>
const int arraySize = 10;

void Search(int array[], int numberUsed);
//takes array values and the length of array
//displays a message only if their is a number that shows up consecutively 4 times
using namespace std;
int main()
{
	int next, numberUsed, index = 0, Array[arraySize];
	cout << "Enter up to " << arraySize << " non-negative whole numbers." << endl
		 << "Mark the end of the list with a negative number." << endl;
	cin >> next;
	while (next >= 0 && index < arraySize)
	{
		Array[index] = next;
		index++;
		if (index < 10)
		cin >> next;
	}
	numberUsed = index;
	Search (Array, numberUsed);
}
void Search(int array[], int numberUsed)
{
	int ConsecutiveCount = 1, old = array[0]; //this is done so that there is already an old number
		for (int index = 1; index < numberUsed; index++)//loops through index1
		{
			if (old == array[index])//old index number must be equal to new one
			{
				ConsecutiveCount++; //if so it causes the consecutive count to go up
		
				if (ConsecutiveCount == 4)
				{
					cout << "Number that shows up 4 times consecutively is " << array[index] << endl;
					ConsecutiveCount = 1; //shows user the number that was consecutively
				}						 // then goes back to starting point so message wont get repeated
			}
			else
			{
				ConsecutiveCount = 1; //so if a streak ends, it goes back to zero					
			}		//instead of stacking when a new streak begins
		old = array[index]; //the current number becomes the old number and then the cycle is looped 
	}
}

