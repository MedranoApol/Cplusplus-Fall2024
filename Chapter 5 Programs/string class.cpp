#include <iostream>
#include <string>
using namespace std;
int main()
{
	string phrase;
	string adjective("friend"),noun("ants");
	string wish = "bon appetit";
	
	phrase = "I like " + adjective + " " + noun + "!";
	
	cout << phrase << endl
		 << wish << endl;
	
	return 0;
}
