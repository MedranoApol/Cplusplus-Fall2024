#include <iostream>
using namespace std;

double celc (double fahrenPar);
//converts fahrenheit to celcius
double fahr (double fahrenPar);
//converts celcius to fahrenheit

int main ()
{
	char ans;
	double intial_cel, intial_fahr,
		   out_celc, out_fahr;
		   
	cout << "What temperature are you looking to convert to?\n"
		 << "F for fahrenheit, C for celcius" << endl;
	cin >> ans;
	
	if ((ans =='f')||(ans =='F'))
	{
		cout << "What tempature do you have in celcius?\n";
		cin >> intial_cel;
		cout << endl;
		
		out_fahr = fahr (intial_cel);
		
		cout << "The temperature " << intial_cel
		     << " in degrees celcius is "
		     << out_fahr << " in degrees fahrenheit.\n"
		     << endl;
	}
	else if ((ans == 'c')||(ans == 'C'))
	{
		cout << "What temperature do you have in fahrenheit?\n";
		cin >> intial_fahr;
		cout << endl;
		
		out_celc = celc (intial_fahr);
		
		cout << "The temperature " << intial_fahr
			 << " in degrees fahrenheit is "
			 << out_celc << " in degrees celcius.\n"
			 << endl;	
	}
	else 
	{
		cout << "invalid character." << endl;
	}
	return 0;
}

double celc (double fahrenPar)
{
	double c_converted;
	
	c_converted = (5*(fahrenPar-32)/9);
	return (c_converted);
}

double fahr (double celcPar)
{
	double f_converted;
	
	f_converted = (((9) * celcPar)/5);
	return (f_converted + 32);
}
