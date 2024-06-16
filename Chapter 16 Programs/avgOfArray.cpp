#include <iostream>

double average (int* arr, int size){
	int sum = 0;
	for (int* ptr = arr; ptr < arr + size; ptr++)
		sum += *ptr;
	return (sum/static_cast<double>(size));
}

int main(){
	int a[7] = {1, 2, 4, 5, 8, 10, 12};
	double avg = average(a, 7);
	std::cout << "Average value is " << avg << "\n";
	return 0; 
}
