//Program to demonstrate the function equal. The class DayOfYear
//is the same as in Self-Test Exercises 23�24 in Chapter 10.
#include <iostream>
using namespace std;
class DayOfYear
{
public:
	friend bool operator ==(DayOfYear date1, DayOfYear date2);
	//Precondition: date1 and date2 have values.
	//Returns true if date1 and date2 represent the same date;
	//otherwise, returns false.
	DayOfYear(int theMonth, int theDay);
	//Precondition: theMonth and theDay form a
	//possible date. Initializes the date according
	//to the arguments.	
	DayOfYear( );
	//Initializes the date to January first.
	void input( );
	void output( );
	int getMonth( );
	//Returns the month, 1 for January, 2 for February, etc.
	int getDay( );
	//Returns the day of the month.
private:
	void checkDate( );
	int month;
	int day;
};
int main( )
{
	DayOfYear today, bachBirthday(3, 21);
	
	cout << "Enter today's date:\n";
	today.input( );
	cout << "Today's date is ";
	today.output( );

	cout << "J. S. Bach's birthday is ";
	bachBirthday.output( );	
	
	if (today == bachBirthday)
	cout << "Happy Birthday Johann Sebastian!\n";
	else
	cout << "Happy Unbirthday Johann Sebastian!\n";
	return 0;
}

bool operator ==(DayOfYear date1, DayOfYear date2)
{
	return (date1.month == date2.month && date1.day == date2.day);
}
DayOfYear::DayOfYear(int theMonth, int theDay) : month(theMonth), day(theDay)
{
	checkDate();
}
DayOfYear::DayOfYear() : month(0), day(0)
{

}
int DayOfYear::getMonth( )
{
	return month;
}
void DayOfYear::checkDate( )
{
	if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
	{
		cout << "Illegal date. Aborting program.\n";
		exit(1);
	}
}
int DayOfYear::getDay( )
{
	return day;
}
//Uses iostream:
void DayOfYear::input( )
{
	cout << "Enter the month as a number: ";
	cin >> month;
	cout << "Enter the day of the month: ";
	cin >> day;
}
//Uses iostream:
void DayOfYear::output( )
{
	cout << "month = " << month
	<< ", day = " << day << endl;
}
