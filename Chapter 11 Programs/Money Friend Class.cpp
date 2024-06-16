//Program to demonstrate the class Money.
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
//Class for amounts of money in U.S. currency.
class Money
{
public:
	friend Money operator +(const Money& amount1, const Money& amount2);
	//Precondition: amount1 and amount2 have been given values.
	//Returns the sum of the values of amount1 and amount2.
	friend Money operator -(const Money& amount1, const Money& amount2);
	
	friend Money operator -(const Money& amount);
	
	friend bool operator ==(const Money& amount1, const Money& amount2);
	//Precondition: amount1 and amount2 have been given values.
	//Returns true if the amount1 and amount2 have the same value;
	//otherwise, returns false.
	Money(long dollars, int cents);
	//Initializes the object so its value represents an amount with the
	//dollars and cents given by the arguments. If the amount is negative,
	//then both dollars and cents must be negative.
	Money(long dollars);
	//Initializes the object so its value represents $dollars.00.
	Money( );
	//Initializes the object so its value represents $0.00.
	double getValue( ) const;
	//Precondition: The calling object has been given a value.
	//Returns the amount of money recorded in the data of the calling object.
	friend istream& operator >>(istream& ins, Money& amount);
	//Precondition: If ins is a file input stream, then ins has already been
	//connected to a file. An amount of money, including a dollar sign, has been
	//entered in the input stream ins. Notation for negative amounts is -$100.00.
	//Postcondition: The value of the calling object has been set to
	//the amount of money read from the input stream ins.
	friend ostream& operator <<(ostream& outs, const Money& amount);
	//Precondition: If outs is a file output stream, then outs has already been
	//connected to a file.
	//Postcondition: A dollar sign and the amount of money recorded
	//in the calling object have been sent to the output stream outs.
private:
	long allCents;
};
	int digitToInt(char c);
	//Function declaration for function used in the definition of Money::input:
	//Precondition: c is one of the digits '0' through '9'.
	//Returns the integer for the digit; for example, digitToInt ('3') returns 3.	
int main( )
{
	Money yourAmount, myAmount(10, 9), ourAmount;
	cout << "Enter an amount of money: ";
	cin >> yourAmount;
	cout << "Your amount is ";
	cout << yourAmount << "\n";
	cout << "My amount is ";
	cout << myAmount << "\n";
	if (yourAmount == myAmount)
		cout << "We have the same amounts.\n";
	else
		cout << "One of us is richer.\n";
	ourAmount = yourAmount + myAmount;
	cout << yourAmount;
	cout << " + ";
	cout << myAmount;
	cout << " equals ";
	cout << ourAmount << "\n";
	return 0;
}
Money operator +(const Money& amount1, const Money& amount2)
{
	Money temp;
	temp.allCents = amount1.allCents + amount2.allCents;
	return temp;
}
Money operator -(const Money& amount1, const Money& amount2)
{
	Money temp;
	temp.allCents = amount1.allCents - amount2.allCents;
	return temp;
}
Money operator -(const Money& amount){
	Money temp;
	temp.allCents = -amount.allCents;
	return temp;
}
bool operator ==(const Money& amount1, const Money& amount2)
{
	return (amount1.allCents == amount2.allCents);
}

Money::Money(long dollars, int cents)
{
	if (dollars * cents < 0) //If one is negative and one is positive
	{
		cout << "Illegal values for dollars and cents.\n";
		exit(1);
	}
	allCents = dollars * 100 + cents;
}

Money::Money(long dollars) : allCents(dollars * 100)
{
	//Body intentionally blank.
}

Money::Money( ) : allCents(0)
{
	//Body intentionally blank.
}
double Money::getValue( ) const
{
	return (allCents * 0.01);
}
//Uses iostream, cctype, cstdlib:
istream& operator >>(istream& ins, Money& amount)
{
	char oneChar, decimalPoint, digit1, digit2;
	//digits for the amount of cents
	long dollars;
	int cents;
	bool negative;//set to true if input is negative.
	bool evaluation = true;
	
	do
	{
		ins >> oneChar;
		if (oneChar == '-')
		{
		negative = true;
		ins >> oneChar; //read '$'
		}
		else
		negative = false;
		//if input is legal, then oneChar == '$'
	
		ins >> dollars >> decimalPoint >> digit1 >> digit2;
	
		if (oneChar != '$' || decimalPoint != '.'|| !isdigit(digit1) || !isdigit(digit2))
		{
			cout << "Error illegal form for money input. Try again.\n";
			evaluation = false;
		}
	} while (evaluation == false);
	
	cents = digitToInt(digit1) * 10 + digitToInt(digit2);
	
	amount.allCents = dollars * 100 + cents;
	if (negative)
	amount.allCents = -amount.allCents;
	return ins;
}
//Uses cstdlib and iostream:
ostream& operator <<(ostream& outs, const Money& amount)
{
	long positiveCents, dollars, cents;
	positiveCents = labs(amount.allCents);
	dollars = positiveCents/100;
	cents = positiveCents % 100;

	if (amount.allCents < 0)
		outs << "-$" << dollars << '.';
	else
		outs << "$" << dollars << '.';

	if (cents < 10)
		outs << '0';
	outs << cents;
	return outs;
}

int digitToInt(char c)
{
	return (static_cast<int>(c) - static_cast<int>('0'));
}
