#include <iostream>
using namespace std;

class NoOsmar
{
public:
	NoOsmar();
	NoOsmar(int Amount);
	int getBrian();
private:
	int BrianAmount;
};

int main()
{
	int Brian, Osmar;
	double BrianPerOsmar;
	try{
	cout << "Enter in the number of Brians: ";
	cin >> Brian;
	cout << "Enter in the number of Osmars: ";
	cin >> Osmar;
	
	if (Osmar <= 0)
		throw NoOsmar(Brian);
		
	BrianPerOsmar = Brian/static_cast<double>(Osmar);
	cout << "There are " << Brian << " Brian(s), "
		 << "and " << Osmar << " Osmar(s). \n"
		 << "Which means there are " << BrianPerOsmar 
		 << " Brians Per Osmar.\n";
	}catch(NoOsmar e){
		cout << e.getBrian() << " Brians and no Osmar??\n"
			 << "Sounds like a typically day in Johns.\n";
	}
	return 0;
}
NoOsmar::NoOsmar()
{}
NoOsmar::NoOsmar(int Amount) : BrianAmount(Amount)
{}

int NoOsmar::getBrian()
{
	return BrianAmount;
}

