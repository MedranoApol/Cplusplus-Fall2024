#include <iostream>
using namespace std;
int main()
{
	int numberOfFortniteBattlepasses, tiersPerBattlepass, totalTiers;
	cout << "Press return after entering a number, please. \n";
	cout << "Enter the number of Battlepasses that you got fam:\n";
	cin >> numberOfFortniteBattlepasses;
	if (numberOfFortniteBattlepasses>14) 
	cout << "Why you capping dawg. \n";
	else
	cout << "weirdo. \n";
	cout << "Enter the average of tiers you made it to in each battlepass:\n";
	cin >> tiersPerBattlepass;
	totalTiers = numberOfFortniteBattlepasses * tiersPerBattlepass;
	cout << "I mean this doesn't really matter at all. \n";
	cout << "But if you have ";
	cout << numberOfFortniteBattlepasses;
	cout << " Fornite Battlepasses throughout your career. \n";
	cout << "Then, on average you completed ";
	cout << tiersPerBattlepass;
	cout << " tiers per Battlepass. \n";
	cout << "That means that you have completed ";
	cout << totalTiers;
	cout << " total tiers thoughout your whole prosperous Fortnite career. \n";
	cout << "Congrats, Gamer! \n";
	return 0;
	}
