//over2.cpp
#include <iostream>
using namespace std;

class Count
{
private:
	int value;
public:
	Count() : value(5){
	}
	void operator++(){
		++value;
	}
	void display(){
		cout << "Count: " << value << "\n";
	}
};

int main(){
	Count value;
	value.display();
	++value;
	value.display();
	return 0;
}
