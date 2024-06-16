#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

const int Index1_Size = 7;
const int Index2_Size = 4;

bool seatsOpen (char a[][Index2_Size]);
//searches if seats are open, if open return true
//if no spots are open, then return false
void intializeSeating (char a[][Index2_Size]);
//intializes array to simulate airplane seats
void outputSeating (char a[][Index2_Size]);
//outputs the current state of seating to the user
void findSeating (char a[][Index2_Size], int Loc1, char Loc2);
//takes in the location, checks if inputs are legal
//assigns passenger to input location, prints updated seating
int main()
{
	char seating[Index1_Size][Index2_Size];
	int Loc1;
	char Loc2, ans;
	intializeSeating (seating);
	outputSeating (seating);
	do
	{
		cout << "Enter the Row Number followed by Seat Letter"
			 << " you wish to assign a passenger to: ";
		cin >> Loc1 >> Loc2;
		if (seatsOpen(seating) == true)
			findSeating (seating, Loc1, Loc2);
		else
		{		
			cout << "All seats are taken. Ending Program.";
			exit(1);
		}
		cout << "Would you like to assign a passenger to another seat? (Y for Yes, N for No)\n";
		cin >> ans;
		cout << endl;
	} while ((ans == 'Y') || (ans == 'y'));
	return 0;
}
bool seatsOpen (char a[][Index2_Size])
{
	for (int i = 0; i < Index1_Size; i++)
	{	
		for	(int j = 0; j < Index2_Size; j++)
		{
		    if (a[i][j] != 'X')
			{
				 return (true);
			}	
		}
	}
	return (false);
}
void intializeSeating (char a[][Index2_Size])
{
	for (int i = 0; i < Index1_Size; i++)
	{
		a[i][0] = 'A';
		a[i][1] = 'B';
		a[i][2] = 'C';
		a[i][3] = 'D'; 
	}
}
void outputSeating (char a[][Index2_Size])
{
	for (int i = 0; i < Index1_Size; i++)
	{	
		cout << i+1 << " ";
		for (int j = 0; j < Index2_Size; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}
void findSeating (char a[][Index2_Size], int Loc1, char Loc2)
{
	if (Loc1 < 1 || Loc1 > 7)
	{
		cout << "Invalid entry.\n\n";
		return;
	}
	int ind1 = Loc1 - 1;
	int ind2;
	
	if (toupper(Loc2) == 'A')
		ind2 = 0;
	else if (toupper(Loc2) == 'B')
		ind2 = 1;
	else if (toupper(Loc2) == 'C')
		ind2 = 2;
	else if (toupper(Loc2) == 'D')
		ind2 = 3;
	else
	{
		cout << "Invalid entry.\n\n";
		return;
	}
	
	if (a[ind1][ind2] == 'X')
	{
		cout << Loc1 << Loc2
			 << " is already occupied.\n\n";
		return;
	}
	else
	{
		a[ind1][ind2] = 'X';
		cout << "Seat is now occupied at "
			 << Loc1 << Loc2 << ".\n\n";
	}
	cout << "Updated airplane seating:\n";
	outputSeating (a);
	return;
}
