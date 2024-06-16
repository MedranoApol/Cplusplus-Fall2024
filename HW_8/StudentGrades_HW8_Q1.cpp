//Apol Medrano HW8 Q2
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
//stucture for keeping record for students performance
struct StudentRecord
{
	double quizGrade[2];
	double midTerm;
	double finalExam;
	double avgScore;
	char letterGrade;
};
void FindAverageScore(StudentRecord& student);
//takes in studentRecord student, calculates avg score
//assigns value to avgScore and letterGrade
char FindLetterGrade (double classScore);
//takes in avgScoreOfClass
//returns the letterGrade
void checkDynamicSize(int arraySize);
//checks if dynamic array size is illegal
int main()
{
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	char ans;
	int studentSize;
	
	do
	{
		cout << "Amount of Students: ";
		cin >> studentSize;
		checkDynamicSize (studentSize);
		cout << endl;
		StudentRecord* student = new StudentRecord[studentSize];
	
		for (int i = 0; i < studentSize; i++)     
		{
			cout << "Student " << i+1 << ":\n";
			cout << "Enter quiz 1 score (out of 10): ";
			cin >> student[i].quizGrade[0];
			cout << "Enter quiz 2 score (out of 10): ";
			cin >> student[i].quizGrade[1];
			cout << "Enter midterm grade (out of 100): ";
			cin >> student[i].midTerm;
			cout << "Enter final exam grade (out of 100): ";
			cin >> student[i].finalExam;
			FindAverageScore(student[i]);
			cout << "\nStudent " << i+1 << " score for the class: "
				 << student[i].avgScore
				 << "\nStudent " << i+1 << " letter grade: "
				 << student[i].letterGrade << endl << endl;
		}
		delete [] student;
		
		cout << "\nWould you like to enter more student grades?"
			 << " (Y for yes, N for No): ";
		cin >> ans;		
	} while(toupper(ans) == 'Y');
	return 0;
	
}
void FindAverageScore(StudentRecord& student)
{
	double gradeQuiz1 = student.quizGrade[0]/10;
	double gradeQuiz2 = student.quizGrade[1]/10;
	double gradeMidTerm = student.midTerm/100;
	double gradeFinalExam = student.finalExam/100;
	double classQuiz = (((gradeQuiz1 + gradeQuiz2)/2) * 100) * .25;
	double classMid = (gradeMidTerm * 100) * .25;
	double classFinal = (gradeFinalExam * 100) * .5;
	double classScore = classQuiz + classMid + classFinal; 
	
	student.avgScore = classScore;
	student.letterGrade = FindLetterGrade(classScore);
}
char FindLetterGrade (double classScore)
{
	if (classScore >= 90)
		return ('A');
	if (classScore >= 80 && classScore < 90)
		return ('B');
	if (classScore >= 70 && classScore < 80)
		return ('C');
	if (classScore >= 60 && classScore <70 )
		return ('D');
	if (classScore < 60)
		return ('F');
}
void checkDynamicSize(int arraySize)
{
	if ((!(isdigit(arraySize))) && (arraySize > 0))
		return;
	else 
	{
		cout << "Invalid input. Aborting program.\n";
		exit(1);
	}
}
