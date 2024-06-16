#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char fart[6];
	strcpy(fart, "0345");
	int a = atoi(fart);
	cout << a;
	return 0;
}
