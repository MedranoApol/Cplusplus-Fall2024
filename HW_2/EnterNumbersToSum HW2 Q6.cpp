#include <iostream>
using namespace std;
int main ()
{
	int n_n;
	char ans;
	double total, n;
	
	cout << "Hello!" << endl
		 << "Please enter numbers and this program will add them all up!" << endl
		 << "You will need at to input at least 3 negative numbers!" << endl
		 << "Enter the number 0 when you want to finally see the sum!" << endl;
		 
	
	do
	{
			(n_n=0);
			(total=0);
			
		do 
		{
			cout << "Enter a number: ";
			cin >> n;
		
			if (n < 0)
			{
				(n_n++);
			}
		
			total += n;
		
		} while ((n > 0) || (n < 0));
	
		if (n_n > 2)
		{
			cout << "Here is the total of all the numbers added up: " << total << endl
				 << endl;
		}
		else 
		{
			cout << "Welp, look like you didn't enter in at least 3 negative numbers" << endl
				 << "Looks like you're going to have to try again!" << endl
				 << endl;
		}
		
		cout << "Would you like to run the program again?" << endl
			 << "Y for yes, N for no" << endl;
		cin >> ans;
		cout << endl;
		
	} while ((ans == 'y')||(ans == 'Y'));
	
	cout << "Thank you for using this program!" << endl
		 << "I hope you had a great time!" << endl
		 << "Have a great day!" << endl;
	return 0;	
}	
