//HW7 Q4 Apol Medrano
//Computer lab
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Network
{
public:
	Network();
	//intializes with no users logged in	
	void startLabs ();
	//intializes labs to zero
	//boots labs up or kicks all user's off
	void menu();
	//runs main menu, either exit, login, logoff, or search
private:
	int user_ID;
	int station;
	int labNum;
	int lab_one[5];
	int lab_two[6]; 
	int lab_three[4]; 
	int lab_four[3]; 
	bool check(int theUser_ID, int theStation, int theLabNum);
	//Used for login: checks UserID, station & labNum are not
	//illegal values and if station is open to log into
	bool check (int theStation, int theLabNum);
	//Used for logout: checks station & labNum are not illegal
	//values and there is a user to logout at specific station
	void getLab(int theUser_ID, int theStation, int theLabNum);
	//takes in User_ID, the station and theLabNum and updates
	//the specific workstation inputed with User_ID
	void login();
	//prompts input for user_id and the specific lab
	// & workstaton they will be logging on to
	void logoff();
	//prompts input for specific lab & workstation
	// that will log a user off 
	void search();
	//shows all the labs and their workstations
	//displays which ones are open or are occupied by user
};
int main()
{
	Network Overseer;
	Overseer.startLabs();
	Overseer.menu();
	return 0;
}
void Network::startLabs ()
{
	int index;
	for (index = 0; index < 5; index++)
	lab_one[index] = 0;
	for (index = 0; index < 6; index++)
	lab_two[index] = 0;
	for (index = 0; index < 4; index++)
	lab_three[index] = 0;
	for (index = 0; index < 3; index++)
	lab_four[index] =0;
	return;
}
Network::Network() : user_ID(0), station(0), labNum(0)
{
	
}
void Network::getLab(int theUser_ID, int theStation, int theLabNum)
{
	switch(theLabNum)
	{
	case 1:
		lab_one[theStation-1] = theUser_ID;
		break;
	case 2:
		lab_two[theStation-1] = theUser_ID;
		break;
	case 3:
		lab_three[theStation-1] = theUser_ID;
		break;
	case 4:
		lab_four[theStation-1] = theUser_ID;
		break;
	default:
		break;
	}
}
void Network::menu()
{
	int selection;
	do
	{
		cout << "MAIN MENU\n";
		cout << "0:quit\n1:login\n2.logoff\n3.search\n";
		cin >> selection;
		switch(selection)
		{
		case 0:
			return;
			break;
		case 1:
			login();
			break;
		case 2:
			logoff();
			break;
		case 3:
			search();
			break;
		default:
			cout << "\nInvalid entry. Re-enter choice.\n\n";
			break;
		}
	} while ((!(selection <= 0)) || (!(selection >= 3)));
}
bool Network::check(int theUser_ID, int theStation, int theLabNum)
{
	if ((theUser_ID < 10000) || (theUser_ID > 99999))
	{
		cout << "Invalid User ID. Try again\n";
		return (false);
	}
	switch(theLabNum)
	{
	case 1:
		if ((theStation<1)||(theStation>5))
		{
			cout << "Invalid station number. Try again\n";
			return (false);
		}
		if (lab_one[theStation-1] != 0)
		{
			cout << station << " at " << theLabNum << " taken. Try again.\n";
			return (false);
		}
		break;
	case 2:
		if ((theStation<1)||(theStation>6))
		{
			cout << "Invalid station number. Try again.\n";
			return (false);
		}
		if (lab_two[theStation-1] != 0)
		{
			cout << station << " at " << theLabNum << " taken. Try again.\n";
			return (false);
		}
		break;
	case 3:
		if ((theStation<1)||(theStation>4))
		{
			cout << "\nInvalid station number. Try again.\n";
			return (false);
		}
		if (lab_three[theStation-1] != 0)
		{
			cout << station << " at " << theLabNum << " taken. Try again.\n";
			return (false);
		}
		break;
	case 4:
		if ((theStation<1)||(theStation>3))
		{
			cout << "Invalid station number.\n";
			return (false);
		}
		if (lab_four[theStation-1] != 0)
		{
			cout << station << " at " << theLabNum << " taken. Try again.\n";
			return (false);
		}
		break;
	default:
		cout << "Invalid lab number. Try again.\n";
		return (false);
		break;
	}
	return (true);
}
bool Network::check (int theStation, int theLabNum)
{
	switch(theLabNum)
	{
	case 1:
		if ((theStation<1)||(theStation>5))
		{
			cout << "Invalid station number. Try again\n";
			return (false);
		}
		if (lab_one[theStation-1] != 0)
			return (true);
		else
		{
			cout << "No user at lab " << theLabNum
			<< " at workstation " << theStation << ".";
			return (false);
		}
		break;
	case 2:
		if ((theStation<1)||(theStation>6))
		{
			cout << "Invalid station number. Try again.\n";
			return (false);
		}
		if (lab_two[theStation-1] != 0)
			return (true);
		else
		{
			cout << "No user at lab " << theLabNum
			<< " at workstation " << theStation << ".";
			return (false);
		}
		break;
	case 3:
		if ((theStation<1)||(theStation>4))
		{
			cout << "\nInvalid station number. Try again.\n";
			return (false);
		}
		if (lab_three[theStation-1] != 0)
			return (true);
		else
		{
			cout << "No user at lab " << theLabNum
			<< " at workstation " << theStation << ".";
			return (false);
		}
		break;
	case 4:
		if ((theStation<1)||(theStation>3))
		{
			cout << "Invalid station number.\n";
			return (false);
		}
		if (lab_four[theStation-1] != 0)
			return (true);
		else
		{
			cout << "No user at lab " << theLabNum
			<< " at workstation " << theStation << ".";
			return (false);
		}
		break;
	default:
		cout << "Invalid lab number. Try again.\n";
		return (false);
		break;
	}
	return (true);
}
void Network::login()
{
	bool evalution;
	do
	{
		cout << "\nEnter 5 digit ID number:\n";
		cin >> user_ID;
		cout << "Enter lab number: (1 through 4)\n";
		cin >> labNum;
		cout << "Enter workstation number:\n";
		cin >> station;
		evalution = check(user_ID,station,labNum);
	} while (evalution != true);
	getLab(user_ID,station,labNum);
	cout << "User " << user_ID 
	<< " logged on workstation number "
	<< station << " in lab number " << labNum << ".\n"
	<< "Returning to main menu." << endl << endl;
}
void Network::logoff()
{
	cout << "Enter lab number: (1 through 4)\n";
	cin >> labNum;
	cout << "Enter workstation number:\n";
	cin >> station;
	user_ID = 0;
	if (check(station, labNum))
	{
		getLab(user_ID,station,labNum);
		cout << endl << "User has been"
		<< " logged off from workstation number "
		<< station << " in lab number " << labNum << ".\n";
	}
	cout << "Returning to main menu." << endl << endl;
}
void Network::search()
{
	int index;
	cout << "\nLab 1 ";
	for (index = 0; index < 5; index++)
	{
	cout << index+1 << ":";
	if (lab_one[index] == 0)
	cout << "empty" << " ";
	else
	cout << lab_one[index] << " ";
	}
	cout << "\nLab 2 ";
	for (index = 0; index < 6; index++)
	{
	cout << index+1 << ":";
	if (lab_two[index] == 0)
	cout << "empty" << " ";
	else
	cout << lab_two[index] << " ";
	}
	cout << "\nLab 3 ";
	for (index = 0; index < 4; index++)
	{
	cout << index+1 << ":";
	if (lab_three[index] == 0)
	cout << "empty" << " ";
	else
	cout << lab_three[index] << " ";
	}
	cout << "\nLab 4 ";
	for (index = 0; index < 3; index++)
	{
	cout << index+1 << ":";
	if (lab_four[index] == 0)
	cout << "empty" << " ";
	else
	cout << lab_four[index] << " ";
	}
	cout << endl << endl;
	return;
}
