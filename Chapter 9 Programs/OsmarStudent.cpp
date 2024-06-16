#include <iostream>
using namespace std;

struct StudentRec
{
	int student_number;
	char grade;
};

int main()
{
	StudentRec OsmarAlvarez;

	OsmarAlvarez.student_number = 2001;
	OsmarAlvarez.grade = 'A';
	
	cout << "Osmar's student ID is: ";
	cout << OsmarAlvarez.student_number << endl;
	cout << "Osmar's grade is: ";
	cout << OsmarAlvarez.grade;
	return 0;
}

