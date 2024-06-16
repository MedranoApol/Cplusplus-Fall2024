#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string first_name, last_name, dog_name;
	
	cout << "What is your first name?" << endl;
	cin >> first_name;
	cout << endl << "What is your last name?" << endl;
	cin >> last_name;
	cout << endl << "What is your dog's name?" << endl;
	cin >> dog_name;
	cout << endl << "Your rap name is: ";
	cout << dog_name << " " << last_name;
	cout << endl << "Hope you like it, " << first_name;
	cout << "." << endl;
	return 0;
}
