#include <fstream>

int main()
{
	using namespace std;
	ifstream inStream;
	ofstream outStream;
	
	inStream.open("infile.txt");
	outStream.open("outfile.txt");
	
	int first, second, third;
	inStream >> first >> second >> third;
	outStream << "The sun of the first 3\n"
			  << "numbers in file.txt\n"
			  << "is " << (first + second + third)
			  << endl;
			  
	inStream.close();
	outStream.close();
	
	return 0;
}
