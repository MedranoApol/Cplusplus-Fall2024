#include <iostream>
using namespace std;
int main ()
{
	double JimScore, PaulScore, JimTotal, PaulTotal;
	cout << "After inserting a number press the return key.\n";
	cout << "Jim and Paul have a competition of who can get the highest score on each test.\n";
	cout << "Whoever's test score is higher gets 100 points added on to their test score!\n";
	cout << "There are 5 test in the class, so whoever has the highest at the end of the 5 test wins!\n";
	cout << "So it is up to you to decide who earned the highest test score! (The test is out of 100)\n";
	cout << "What was Jim's score? \n";
	cin >> JimScore;
	cout << "What was Paul's score? \n";
	cin >> PaulScore;
	
	if (PaulScore > JimScore)
	PaulScore = PaulScore + 100;
	else 
	JimScore = JimScore + 100;
	
	if (PaulScore > JimScore)
	cout << "Paul : I have won! I need to keep this up by continuing to study hard! \n";
	else
	cout << "Paul : I wish I had Jim's score. I'll just need to work hard next time! \n";
	
	PaulTotal = PaulScore;
	JimTotal = JimScore;
	cout << "So far, the results have Jim with a score of " << JimTotal << " and Paul with a score of " << PaulTotal << " .\n";
	cout << "                                                                                                                                    \n";

	cout << "On to the next test!\n";
	cout << "What was Jim's score? \n";
	cin >> JimScore;
	cout << "What was Paul's score? \n";
	cin >> PaulScore;
	
	if (PaulScore > JimScore)
	PaulScore = PaulScore + 100;
	else 
	JimScore = JimScore + 100;
	
	if (PaulScore > JimScore)
	cout << "Paul : I just so happen to win this time around! However, I can't get complacent. Still have 3 test ahead of us! \n";
	else
	cout << "Paul : Jim did really well, I am envious. I'll use that as motivation for the next test! \n";
	
	PaulTotal = PaulScore + PaulTotal;
	JimTotal = JimScore + JimTotal;
	cout << "After two test, the results have Jim with a score of " << JimTotal << " and Paul with a score of " << PaulTotal << " .\n";
	cout << "                                                                                                                                    \n";

	cout << "On to the 3rd test!\n";
	cout << "What was Jim's score? \n";
	cin >> JimScore;
	cout << "What was Paul's score? \n";
	cin >> PaulScore;
	
	if (PaulScore > JimScore)
	PaulScore = PaulScore + 100;
	else 
	JimScore = JimScore + 100;
	
	if (PaulScore > JimScore)
	cout << "Paul : I won this time around! But, the job is not yet finished! \n";
	else
	cout << "Paul : My golly! Jim's score. I need to score better than him if I want to win the whole thing! \n";
	
	PaulTotal = PaulScore + PaulTotal;
	JimTotal = JimScore + JimTotal;
	cout << "After concluding the 3rd test, the results have Jim with a score of " << JimTotal << " and Paul with a score of " << PaulTotal << " .\n";
	cout << "                                                                                                                                    \n";

	cout << "On to the 4th test, only one more remains after this one!\n";
	cout << "What was Jim's score? \n";
	cin >> JimScore;
	cout << "What was Paul's score? \n";
	cin >> PaulScore;
	
	if (PaulScore > JimScore)
	PaulScore = PaulScore + 100;
	else 
	JimScore = JimScore + 100;
	
	if (PaulScore > JimScore)
	cout << "Paul : I have won this one! I need to continue to work hard. Only one more test remains! \n";
	else
	cout << "Paul : Jim's score bested me. I'll just have to come back better and stronger for the final test! \n";
	
	PaulTotal = PaulScore + PaulTotal;
	JimTotal = JimScore + JimTotal;
	cout << "Nearing the end, the results are Jim with a score of " << JimTotal << " and Paul with a score of " << PaulTotal << " .\n";
	cout << "                                                                                                                                    \n";

	cout << "On to the 5th and final test!\n";
	cout << "What was Jim's score? \n";
	cin >> JimScore;
	cout << "What was Paul's score? \n";
	cin >> PaulScore;
	
	if (PaulScore > JimScore)
	PaulScore = PaulScore + 100;
	else 
	JimScore = JimScore + 100;
	
	if (PaulScore > JimScore)
	cout << "Paul : Yes, I happen to win on the last test! Let's see how the results turned out. \n";
	else
	cout << "Paul : Jim out-preformed me on the last test!. Let's now see who won the whole thing! \n";
	
	PaulTotal = PaulScore + PaulTotal;
	JimTotal = JimScore + JimTotal;
	cout << "Here are the final results:\n";
	cout << "Jim has a score of " << JimTotal << ".\n";
	cout << "Paul has a score of " << PaulTotal << ".\n";
	
	if (PaulTotal > JimTotal)
	cout << "Paul: Yes, sweet victory! I work so hard and I am glad that it paid off. Thank you for playing this game with me Jim! \n";
	else
	cout << "Paul: Jim, you did amazing! I tried, but you were the better man this time around. Thank you for competing with me Jim! \n";
	
	cout << "Jim: It was a pleasure playing with you. I really hope we can do this again another time! \n";
	cout << "THE END \n";
	return 0;
}
