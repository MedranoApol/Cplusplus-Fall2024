#include <iostream>
using namespace std;

typedef int* IntPtr;

int main()
{
	IntPtr p;
	int a[10];
	int index;
	
	p = a;
	
	for (index=0; index < 10; index++)
	{
		a[index] = index;
	}
	
	for (index = 0; index < 10; index++)
	{
		p[index] += 1;
		cout << p[index] << endl;
	}
	
	for (index = 0; index < 10; index++)
	{
		cout << a[index];
	}
	return 0;
}
