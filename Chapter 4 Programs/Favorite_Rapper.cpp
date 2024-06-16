#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string favorite_rapperPar;
	
	cout << "Who is your favorite Rapper? (NO SPACES)\n";
	cin >> favorite_rapperPar;
	
	if (favorite_rapperPar == "MF DOOM")
	{
		cout << "Correct Answer. Unriviled Goat. RIP THE SuperVillian." << endl;
	}
	else if ((favorite_rapperPar == "mf doom") || (favorite_rapperPar == "MF doom") || (favorite_rapperPar == "doom") || (favorite_rapperPar == "mf DOOM") || (favorite_rapperPar == "Doom") || (favorite_rapperPar == "MF Doom"))
	{
		cout << "Remember ALL CAPS when you spell the man's name!" << endl;
		cout << "Just playing, he is the goat. The best to touch the mic!" << endl;
		cout << "RIP THE SUPERVILLIAN!" << endl;
	}
	else if ((favorite_rapperPar == "Drizzy")||(favorite_rapperPar == "Drake")||(favorite_rapperPar == "drizzy")||(favorite_rapperPar == "drake")||(favorite_rapperPar == "Aubrey")||(favorite_rapperPar == "aubrey"))
	{
		cout << "HE is beyond ass. C'mon now! Gotta get your music up or sum. So many great artist out there!" << endl;
	}
	else if ((favorite_rapperPar == "Nas")||(favorite_rapperPar == "Nasty")||(favorite_rapperPar == "nas")||(favorite_rapperPar == "nasty")||(favorite_rapperPar == "nastynas"))
	{
		cout << "mid" << endl;
	}
	else if ((favorite_rapperPar == "jay")||(favorite_rapperPar == "Jay")||(favorite_rapperPar == "JayZ")|| (favorite_rapperPar == "jayz")||(favorite_rapperPar == "Jigga")||(favorite_rapperPar == "jigga")||(favorite_rapperPar == "HOVA")||(favorite_rapperPar == "hov")||(favorite_rapperPar == "hova"))
	{
		cout << "Nas's son lowkey. He alright not Goat material." << endl;
	}
	else
	{
		cout << "wrong.";
	}
	
	return 0;
}

