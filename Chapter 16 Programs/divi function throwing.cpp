//divi.cpp
#include <iostream>
using namespace std;

double division(int a, int b){
	if (b == 0)
		throw "Division by zero condition";
	else
		return a/static_cast<double>(b);
}

int main(){
	int a, b;
	double ans;
	std::cout << "Enter two numbers for division: ";
	std::cin >> a >> b;
	try{
	ans = division(a,b);
	std::cout << "Result is " << ans << ".";
	} catch (const char* msg) {
		std::cout << msg;
	}
	return 0;
}
