#include <iostream>
using namespace std;
const int Index1size = 10, Index2size = 3;
int main()
{
	int nest[Index1size][Index2size], sum = 0;
	cout << "Insert value for each nest!" << endl;
	for (int index1 = 0; index1 < Index1size; index1++)
	{
		cout << "The 3 values for nest " << index1 + 1 << " are:\n";
		for (int index2 = 0; index2 < Index2size; index2++)
		{
			cin >> nest[index1][index2];
			sum += nest[index1][index2];
		}
	}
	cout << "The total number of product is " << sum << endl;
	return 0; 
}
