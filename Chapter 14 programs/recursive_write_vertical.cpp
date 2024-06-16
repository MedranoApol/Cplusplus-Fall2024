#include <iostream>
using namespace std;
//prints numbers to screen vertically
void writeVertical (int n){
	if (n < 10){
		cout << n << "\n";
	} else {
		writeVertical(n/10);
		cout << n%10 << "\n";
	}
}

int main(){
	int n;
	cout << "Enter any postive integer: ";
	cin >> n;
	cout << "writeVertical(" << n <<  "):" << "\n";
	writeVertical(n);
	return 0;
}
