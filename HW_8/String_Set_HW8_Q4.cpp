//Apol Medrano HW8 Q4
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//class that stores a set of STL strings
class StringSet
{
public:
	StringSet ();
	//intializes string set to have zero strings
	StringSet (string newString);
	//intializes string set to have 1 string
	StringSet (string a[], int sizeOfString);
	//intializes string set to have an array
	//full of strings, multiple strings at once
	void userPrompt ();
	//gives user's a selection menu to choose 
	//what they wish to do with the stringList
private:
	vector<string> stringList;
	int size;
	void addString ();
	//adds string to set
	void removeString ();
	//removes string from set
	void clearSet ();
	//clears the set, so it is empty
	void theSetSize ();
	//returns the current size of String set
	void outputSet ();
	//outputs all strings within the set
};
int main()
{
	string random[5] = {"Water is wet", "food", "word", "dog", "C++"};
	StringSet listOfStrings(random, 5);
	listOfStrings.userPrompt();
	return 0;
}
StringSet :: StringSet ( )
{
	stringList.clear();
	size = 0;
}
StringSet :: StringSet (string newString)
{
	stringList.push_back(newString);
	size = 1;
}
StringSet::StringSet (string a[], int sizeOfString)
{
	size = 0;
	for (int i=0; i < sizeOfString; i++)
	{
		stringList.push_back(a[i]);
		size++;
	}
}
void StringSet :: userPrompt ()
{
	int choice = 0;
	while (choice != 6)
	{
		cout << "Select an Option\n"
		 	<< "1. Add String to List\n"
		 	<< "2. Remove String from List\n"
		 	<< "3. Clear the entire String List\n"
		 	<< "4. See String List size\n"
		 	<< "5. Output entire String List\n"
		 	<< "6. Quit\n"
		 	<< "Selection: ";
		cin >> choice;
		switch(choice)
		{
		case 1:
			cin.ignore();
			addString();
			break;
		case 2:
			removeString();
			break;
		case 3:
			clearSet();
			break;
		case 4:
			theSetSize();
			break;
		case 5:
			outputSet();
			break;
		case 6:
			return;
			break;
		default:
			cout << "\nInvalid entry. Re-enter choice.\n\n";
			break;
		}
	}
}
void StringSet :: addString ()
{
	string newString;
	char choice;
	cout << "\nEnter the String you'd like to add:\n";
	getline (cin, newString);
	cout << "Would you like for it to be added? (Y for Yes, N for No)\n";
	cin >> choice;
	if ((choice == 'Y') || (choice == 'y'))
	{
		stringList.push_back(newString);
		size ++;
	}
	cout << "Returning to Selection Menu.\n\n";
	return;
}
void StringSet :: removeString ()
{
	if (size == 0)
	{
		cout << "\nNothing to delete yet. Back to Selection Menu.\n\n";
		return;
	}
	if (size == 1)
	{
		cout << "\nIf you want to delete already. Use clear instead.\n"
			 << "Returning to Selection Menu.\n\n";
		return;
	}
	
	int selection;
	cout << "\nChoose what String row you'd like to delete.\n";
	outputSet();
	cout << "Enter row number to delete: ";
	cin >> selection;
	if (selection > size || selection < 0)
	{
		cout << "Invalid value. Returning to Selection Menu.\n\n";
		return;
	}
	else if (selection == size)
	{ 
		stringList.pop_back();
		size = size - 1;
		cout << "Deletion completed.\n\n";
	}
	else
	{
		stringList.erase(stringList.begin() + selection-1);
		size = size - 1;
		cout << "Deletion completed.\n\n";
	}
	return;	
}
void StringSet :: clearSet ()
{
	char choice;
	cout << "\nAre you sure you want to clear the List?\n"
		 << "(Y for Yes or N for No)\n";
	cin >> choice;
	if ((choice == 'Y') || (choice == 'y'))
	{
		stringList.clear();
		size = 0;
	}
	cout << "Returning to Selection Menu.\n\n";
	return;
}
void StringSet :: theSetSize ()
{
	cout << "\nThe size of the String List is "
		 << size << " element(s) long.\n";
	cout << "Returning to Selection Menu.\n\n";
	return;
}
void StringSet :: outputSet ()
{
	if (size == 0)
	{
		cout << "\nNothing to show yet, try adding some Strings.\n"
			 << "Back to Selection Menu.\n\n";
		return;
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	cout << i+1 << ". " << "\"" << stringList[i] << "\"" << "\n\n";

	return;
}
