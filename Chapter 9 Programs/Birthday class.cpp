#include <iostream>
#include <string>
using namespace std;

class Birthday
{
public:
	Birthday(int month, int day, int year);
	//Initializes the birthdate to month-day-year
	
	void output(ostream& outs);
	
private:
	int monthOfBirth;
	int dayOfBirth;
	int yearOfBirth;
};
class BirthdayWish : public Birthday
{
public:

}
int main()
{
	Birthday Nati(12, 18, 2002);
	Birthday Apol(10, 11, 2002);
	Birthday Max(3, 26, 2008);
	Birthday Sumer(8, 3, 1977);
	
	cout << "Nati's birthday is: ";
	Nati.output(cout);
	cout << "Apol's birthday is: ";
	Apol.output(cout);
	cout << "Max's birthday is: ";
	Max.output(cout);
	return 0;
}
Birthday::Birthday(int month, int day, int year)
				  : monthOfBirth(month), dayOfBirth(day), yearOfBirth(year) 
{
	
}
void Birthday::output(ostream& outs)
{
	outs << monthOfBirth << "-" << dayOfBirth << "-" << yearOfBirth << endl;
}
