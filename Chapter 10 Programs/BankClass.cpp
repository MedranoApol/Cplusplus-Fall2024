//Demonstrates an alternative implementation of the class BankAccount.
#include <iostream>
#include <cmath>
using namespace std;
//Class for a bank account:
class BankAccount
{
public:
	BankAccount operator =(const BankAccount& account);
	//Overloads the assignment operator = to copy a bankAccount details
 	//from one object to another.

	friend BankAccount operator +(const BankAccount& account1, const BankAccount& account2);
	
	friend BankAccount operator -(const BankAccount& account1, const BankAccount& account2);
	//Precondition: account1 and account2 have been given values.
	//Returns account1 minus account2.0
	friend BankAccount operator -(const BankAccount& account);
	//Precondition: amount has been given a value.
	//Returns the negative of the value of amount.

	friend bool operator ==(const BankAccount& account1, const BankAccount& account2);
	
	BankAccount(int dollars, int cents, double rate);
	//Initializes the account balance to $dollars.cents and
	//initializes the interest rate to rate percent.
	BankAccount(int dollars, double rate);
	//Initializes the account balance to $dollars.00 and
	//initializes the interest rate to rate percent.
	BankAccount( );
	//Initializes the account balance to $0.00 and the
	//interest rate to 0.0%.
	void set(int dollars, int cents, double rate);
	//Postcondition: The account balance has been set to $dollars.cents;
	//The interest rate has been set to rate percent.
	void set(int dollars, double rate);
	//Postcondition: The account balance has been set to $dollars.00.
	//The interest rate has been set to rate percent.
	void update( );
	//Postcondition: One year of simple interest has been
	//added to the account balance.
	double getBalance( );
	//Returns the current account balance.
	double getRate( );
	//Returns the current account interest rate as a percentage.
	friend istream& operator >>(istream& ins, BankAccount& account);
	//Overloads the >> operator so it can be used to input values of type Money.
	//Notation for inputting negative amounts is as in -$100.00.
	//Precondition: If ins is a file input stream, then ins has already been
	//connected to a file.
	friend ostream& operator <<(ostream& outs, const BankAccount& account);
	//Overloads the < operator so it can be used to output values of type Money.
	//Precedes each output value of type Money with a dollar sign.
	//Precondition: If outs is a file output stream,
	//then outs has already been connected to a file.
private:
	int dollarsPart;
	int centsPart;
	double interestRate;
	//Expressed as a fraction, for example, 0.057 for 5.7%
	double fraction(double percent);
	//Converts a percentage to a fraction. For example, fraction(50.3)
	//returns 0.503.
	double percent(double fractionValue);
	//Converts a fraction to a percentage. For example, percent(0.503)	
	//returns 50.3.
};
int main(){
	BankAccount account1(100, 2.3), account2;

	cout << "account1 initialized as follows:\n";
	cout << account1;
	cout << "account2 initialized as follows:\n";
	cout << account2;
	account1.set(999, 99, 5.5);
	cout << account1;
	cout << "account1 reset to the following:\n";
	cout << account1;
	return 0;
}
BankAccount BankAccount :: operator =(const BankAccount& account){
	BankAccount temp;
	temp.dollarsPart = account.dollarsPart;
	temp.centsPart = account.centsPart;
	temp.interestRate = account.interestRate;
	return temp;  
}
BankAccount operator +(const BankAccount& account1, const BankAccount& account2)
{
	BankAccount temp;
	temp.dollarsPart = account1.dollarsPart + account2.dollarsPart;
	temp.centsPart = account1.centsPart + account2.centsPart; 
	temp.interestRate = account1.interestRate + account2.interestRate;
	return temp;
}
BankAccount operator -(const BankAccount& account1, const BankAccount& account2)
{
	BankAccount temp;
	temp.dollarsPart = account1.dollarsPart - account2.dollarsPart;
	temp.centsPart = account1.centsPart - account2.centsPart; 
	temp.interestRate = account1.interestRate - account2.interestRate;
	return temp;
}
BankAccount operator -(const BankAccount& account)
{
	BankAccount temp;
	temp.dollarsPart = -account.dollarsPart;
	temp.centsPart = -account.centsPart;
	temp.interestRate = -account.interestRate;
	return temp;
}
bool operator ==(const BankAccount& account1, const BankAccount& account2)
{
	return (account1.dollarsPart == account2.dollarsPart &&
			account1.centsPart == account2.dollarsPart &&
			account1.interestRate == account2.interestRate);
}
BankAccount::BankAccount(int dollars, int cents, double rate)
{
	if ((dollars < 0) || (cents < 0) || (rate < 0)){
	cout << "Illegal values for money or interest rate.\n";
	exit(1);
	}
	dollarsPart = dollars;
	centsPart = cents;
	interestRate = fraction(rate);
}
BankAccount::BankAccount(int dollars, double rate)
{
	if ((dollars < 0) || (rate < 0)){
	cout << "Illegal values for money or interest rate.\n";
	exit(1);
	}
	dollarsPart = dollars;
	centsPart = 0;
	interestRate = fraction(rate);
}
BankAccount::BankAccount( ) : dollarsPart(0), centsPart(0), interestRate(0.0)
{/*Body intentionally empty*/}
double BankAccount::fraction(double percentValue)
{
	return (percentValue/100.0);
}
//Uses cmath:
void BankAccount::update( )
{
	double balance = getBalance( );
	balance = balance + interestRate * balance;
	dollarsPart = static_cast<int>(floor(balance));
	centsPart = static_cast<int>(floor((balance - dollarsPart)*100));
}
double BankAccount::getBalance( )
{
	return (dollarsPart + 0.01 * centsPart);
}
double BankAccount::percent(double fractionValue)
{
	return (fractionValue * 100);
}
double BankAccount::getRate( )
{
	return percent(interestRate);
}
void BankAccount::set(int dollars, int cents, double rate)
{
	if ((dollars < 0) || (cents < 0) || (rate < 0))
	{
	cout << "Illegal values for money or interest rate.\n";
	return;
	}
	dollarsPart = dollars;
	centsPart = cents;
	interestRate = fraction(rate);
}
void BankAccount::set(int dollars, double rate)
{
	if ((dollars < 0) || (rate < 0))
	{
	cout << "Illegal values for money or interest rate.\n";
	return;
	}
	dollarsPart = dollars;
	interestRate = fraction(rate);
}
istream& operator >>(istream& ins, BankAccount& account)
{
	double percent;
	std::cout << "Enter dollars amount: ";
	ins >> account.dollarsPart;
	std::cout << "Enter cents amount: ";
	ins >> account.centsPart;
	std::cout << "Enter the interestRate: ";
	ins >> percent;
	account.interestRate = percent/100;
	return ins;
}
ostream& operator <<(ostream& outs, const BankAccount& account)
{
	outs.setf(ios::fixed);
	outs.setf(ios::showpoint);
	outs.precision(2);
	outs << "Account balance $" << (account.dollarsPart + 0.01 * account.centsPart) << endl;
	outs << "Interest rate "<< (account.interestRate * 100) << "%" << endl;
	return outs;
}
