//HW3 Q4
//Apol Medrano
#include <iostream>
using namespace std;

double distance(double timePar);
//calculate distance object would fall
//during freefall given a time value

int main ()
{
	double time;
	
	cout <<	"Enter a time in seconds: ";
	cin >> time;
	
	cout << "Given " << time << " seconds," << endl
		 << "an object in freefall would have dropped "
		 << distance(time) << " feet." << endl;
	return 0;
}
double distance(double timePar)
{
	const double acceleration = 32; //32 ft/sec
	double value_distance, time_squared = timePar * timePar;
	
	value_distance = (acceleration * time_squared);
	value_distance /= 2;
	return(value_distance);
}

