//Colton Question 2
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	ifstream inStream("fart.txt");
	ofstream outStream("outfart.txt");
	string line;
	
	while( getline(inStream, line))
	{
		if (line.length()>0)
		outStream << line << endl;
	}
	
	outStream.close();
	inStream.close();
}
