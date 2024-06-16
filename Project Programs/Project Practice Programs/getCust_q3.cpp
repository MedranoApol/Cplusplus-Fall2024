#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream InStream("pQ3.txt"); 
	int cusNum, monthPayment, amountOfCus, Total;
	string cusName;
	vector<string> CusNames;
	vector<int> TotalPaymentPrice;
	
	while (!InStream.eof() && !InStream.fail())
	{
		InStream >> cusNum;
		cout << cusNum << "\n";
		InStream >> cusName;
		CusNames.push_back(cusName);
		cout << cusName << "\n";
		monthPayment = 0;
		Total = 0;
		while (monthPayment != -9)
		{
			InStream >> monthPayment;
			Total = monthPayment + Total;
			cout << monthPayment << " ";
			if (monthPayment == -9)
			{
				Total += 9;
				TotalPaymentPrice.push_back(Total);
				cout << "\n";
			}
		}
	}
	InStream.close();
	cout << "\n";
	for(int i=0; i<CusNames.size();i++)
	{
		cout << CusNames[i] << ": "
		<< TotalPaymentPrice[i] << "\n";
	}
	
	return 0;
}
