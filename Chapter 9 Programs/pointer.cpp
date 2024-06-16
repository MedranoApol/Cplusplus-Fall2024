#include <iostream>
using namespace std;
int main(){
	int* p1, v1 = 0;
	p1 = &v1;
	cin >> *p1;
	*p1 = *p1 + 7;
 	cout << v1 << endl;
 	cout << *p1 << endl;
 return 0;

}
