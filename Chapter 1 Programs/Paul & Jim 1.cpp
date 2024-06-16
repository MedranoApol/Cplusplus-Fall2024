#include <iostream>
using namespace std;
int main()
{
	int PaulScore, JimScore;
	cout << "Paul: hmm... I wonder how I did on the most recent test compared to Jim.\n";
	cout << "As of this moment, Paul has no idea what grade he or Jim got.\n";
	JimScore = 87;
	cout << "The teacher has posted the most recent test scores online, so Paul goes to check it.\n";
	cout << "Input the grade you think Paul got on his test. (make sure to press enter after inputing a number)\n";
	cin >> PaulScore;
	cout << "Paul: It appears that I got a ";
	cout << PaulScore;
	cout << " out of 100. \n";
	cout << "Paul: Well, Jim got an ";
	cout << JimScore;
	cout << " out of 100. \n";
	if (PaulScore>JimScore)
	cout << "Paul: I win, I am better than Jim. hahahahaha \n";
	else
	cout << "Paul: I wish I had his score. I have to be more better prepared next time to beat his grade! \n";
	cout << "THE END \n";
	return 0;
}
