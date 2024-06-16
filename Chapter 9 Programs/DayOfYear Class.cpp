//Program to demonstrate the class DayOfYear.
#include <iostream>
using namespace std;
class DayOfYear
{
public:
	void input( );
	void output( );
	void set(int newMonth, int newDay);
	//Precondition: newMonth and newDay form a possible date.
	//Postcondition: The date is reset according to the arguments.
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
	DayOfYear today, ApolBirthday;
	cout << "Enter today's date:\n";
	today.input( );
	cout << "Today's date is ";
	today.output( );
	ApolBirthday.set(10, 11);
	cout << "Apol Medrano''s birthday is ";
	ApolBirthday.output( );
	if (today.getMonth( ) == ApolBirthday.getMonth( ) && today.getDay( ) == ApolBirthday.getDay( ) )
		cout << "Happy Birthday Apol Medrano!\n";
	else
		cout << "Happy Non-birthday Apol Medrano!\n";
	return 0;
}
//Uses iostream:
void DayOfYear::input( )
{
	cout << "Enter the month as a number: ";
	cin >> month;
	cout << "Enter the day of the month: ";
	cin >> day;
	checkDate( );
}
void DayOfYear::output( )
{
	cout << "month = " << month << ", day = " << day << endl;
}
void DayOfYear::set(int newMonth, int newDay)
{
	month = newMonth;
	day = newDay;
	checkDate();
}
void DayOfYear::checkDate( )
{
	if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
	{
		cout << "Illegal date. Aborting program.\n";
		exit(1);
	}
} 
int DayOfYear::getMonth( )
{
return month;
}
int DayOfYear::getDay( )
{
return day;
}
