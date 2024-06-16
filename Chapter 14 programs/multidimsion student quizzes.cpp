#include <iostream>
using namespace std;

const int Students = 4, Quizzes = 3;

void fillArray(int a[][Quizzes]){
	for (int index1 = 0; index1 < Students; index1++){
		cout << "Enter the 3 quiz grades for Student " << index1+1 << ": ";
		for (int index2 = 0; index2 < Quizzes; index2++){
			cin >> a[index1][index2];
		}
	}
}
void getAverageStudent(int a[][Quizzes], double avg[]){
	double sum;
	for (int index1 = 0; index1 < Students; index1++){
		sum = 0;
		for (int index2 = 0; index2 < Quizzes; index2++){
			sum += a[index1][index2];
		}
		avg[index1] = sum/Quizzes;
	}
}
void getAverageQuiz(int a[][Quizzes], double b[]){
	double sum;
	for (int index2 = 0; index2 < Quizzes; index2++){
		sum = 0;
		for (int index1 = 0; index1 < Students; index1++){
			sum += a[index1][index2];
		}
		b[index2] = sum/Students;
	}
}

void outputArray (int a[][Quizzes], double avg[], double b[]){
	cout.fixed;
	cout.showpoint;
	cout.precision(2);
	cout << "Stu\tAvg\t\t     Quizzes\n";
	for (int index1 = 0; index1 < Students; index1++){
		cout << " " << index1+1 <<"\t " << avg[index1] << "\t\t";
		for (int index2 = 0; index2 < Quizzes; index2++){
			cout << a[index1][index2] << "\t";
		}
		cout << "\n";
	}
	cout <<"\n   \t   \t\t";
	for (int index1 = 0; index1 < Quizzes; index1++)
		cout << b[index1] << "\t";
	cout << "\n";
}

int main(){
	int students[Students][Quizzes];
	double average[Students];
	double b[Quizzes];
	fillArray(students);
	getAverageStudent(students, average);
	getAverageQuiz(students, b);
	outputArray(students, average, b);
	return 0;
}
