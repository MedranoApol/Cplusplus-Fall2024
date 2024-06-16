//Apol Medrano HW8 Q2
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
//tracks fuel efficiency and mileage for an automotive vehicle
class Odometer
{
public:
	friend ostream& operator <<(ostream& outs, const Odometer& vehicle);
	//prints the milesDriven value of an object
	Odometer();
	//intializes Odometer variables to zero
	Odometer(int theMilesDriven, double gasMileage);
	//intializes Odometer variables to attached values
	void resetOdometer ();
	//sets milesDriven to zero
	void setFuelEfficiency (double gasMileage);
	//sets FuelEfficiency to user inputed value
	void addMiles (int theMilesDriven);
	//sets milesDriven to user inputed value
	double gallonsOfGasUsed ();
	//returns the amont of gas used in gallons
private:
	int milesDriven;
	double fuelEfficiency;
};
void checkDynamicSize (int arraySize);
//checks if dynamic array size is illegal
int main()
{
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	
	int arraySize, miles;
	double gasMileage;
	char ans;
	Odometer totalVehicle;
	
	do
	{
		cout << "Trips taken: ";
		cin >> arraySize;
		checkDynamicSize (arraySize);
		cout << endl;
		
		Odometer* vehicle = new Odometer[arraySize];
	
		for (int i = 0; i < arraySize; i++)
		{
			cout << "Trip " << i+1 << ":\n";
			cout << "Enter miles driven: ";
			cin >> miles;
			vehicle[i].addMiles(miles);
			totalVehicle.addMiles(miles); 
			cout << "Enter fuel efficiency: ";
			cin >> gasMileage;
			vehicle[i].setFuelEfficiency(gasMileage); 
			cout << "Gallons of gas used: "
				 << vehicle[i].gallonsOfGasUsed()
				 << endl << endl;	
		}
		delete [] vehicle;
		cout << "Total miles driven: " << totalVehicle
			 << "\nReset Odometer? (Y for yes, N for No)\n";
		cin >> ans;
		if (toupper(ans) == 'Y')
		{
		totalVehicle.resetOdometer();
		}
		
		cout << "\nWould you like to enter more trips?"
			 << " (Y for yes, N for No): ";
		cin >> ans;		
	} while(toupper(ans) == 'Y');
	return 0;
}
Odometer :: Odometer() : milesDriven (0), fuelEfficiency (0.0)
{
	
}
Odometer :: Odometer(int theMilesDriven, double gasMileage)
: milesDriven (theMilesDriven), fuelEfficiency (gasMileage)
{
	
}
void Odometer ::resetOdometer ()
{
	milesDriven = 0;
}
void Odometer :: setFuelEfficiency (double gasMileage)
{
	fuelEfficiency = gasMileage;
}
void Odometer :: addMiles (int theMilesDriven)
{
	milesDriven += theMilesDriven;
}
double Odometer :: gallonsOfGasUsed ()
{
	int tempMiles = milesDriven;
	double tempGasMileage = fuelEfficiency;
	return (tempMiles/tempGasMileage);
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
ostream& operator <<(ostream& outs, const Odometer& vehicle)
{
	int theMilesDriven = vehicle.milesDriven;
	outs << theMilesDriven;
	return outs;
}
