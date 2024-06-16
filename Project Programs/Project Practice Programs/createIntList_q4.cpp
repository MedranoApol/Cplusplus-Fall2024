#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<int> list;
	cout << "Enter numbers to created a list: "
		 << "(Enter 0 to stop)\n";
	while (true)
	{
		cin >> n;
		if (n==0)
			break;
		list.push_back(n);
	}
	 
	cout << "\nCreated list:\n";
	for(int i=0; i < list.size(); i++)
		cout << list[i] << "\n";
		
}
