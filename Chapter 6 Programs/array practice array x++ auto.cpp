#include <iostream>
using namespace std;
int main()
{
	int arr[] = {2, 4, 6, 8};
	for (int& x : arr)
 		x++;
	for (auto x : arr)
	{
 		cout << x;
		cout << endl;
	}
	return 0;
}
