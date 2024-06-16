//HW4 Q2
//Apol Medrano
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{	//open files
	ifstream inStream("in1.txt"), inStream2("in2.txt"); 
	ofstream outStream("out1.txt"), outStream2("out.text");
	char next;
	
	inStream.get(next); //gets char from inStream
	while (! inStream.eof()) //will loop until there is nothing to read in file
	{
		outStream << next; //places symbol from inStream into outstream
		inStream.get(next); //grabs next character and loops
	}
	cout << "Copying of \"in1.txt\" to \"out1.txt\" has finished." << endl;
	//will be displayed after copying (looping) is finished
	inStream2.get(next);
	while (! inStream2.eof()) //same process as above but with different fstreams
	{
		outStream2 << next;
		inStream2.get(next);
	}
	cout << "Copying of \"in2.txt\" to \"out2.txt\" has finished." << endl;

	inStream.close( ); 
	outStream.close( );
	inStream2.close( );
	outStream2.close( );
	return 0;
}

