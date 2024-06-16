#include <iostream>
using namespace std;
int main ()
{
	int JimScore, PaulScore, JimTota1, PaulTota1;
	cout << "Press return (enter key) after you insert a number. \n";
	cout << "Jim and Paul have a competition to see who has the highest score on each test! \n";
	cout << "Whoever wins on a test gets 100 points added to that test result! \n";
	cout << "Then, they'll add up all the scores and the person who earned the most points WINS!! \n";
	cout << "Who won on the most recent test? You decide!\n";
	cout << "Jim recieved an: \n";
	cin >> JimScore;
	cout << "Paul recieved an: \n";
	cin >> PaulScore;
	if (PaulScore=JimScore)
	JimTota1 = JimScore;
	if (PaulScore=JimScore)
	PaulTota1 = PaulScore;
	if (PaulScore>JimScore)
	cout << "Paul: Yes, I won! I must keep studying hard, so I am able to win next time!\n";
	else 
	cout << "Paul: I wish I had Jim's score. I have to be more prepared next time to win!\n";
	if (PaulScore>JimScore)
	PaulTota1 = PaulScore + 100; 
	else
	JimTota1 = JimScore + 100;
	if (PaulScore>JimScore)
	JimTota1 = JimScore;
	else
	PaulTota1 = PaulScore;
	cout << "So far it is Paul with " << PaulTota1 << " and Jim with " << JimTota1 << ".\n";
	return 0;
}
	
