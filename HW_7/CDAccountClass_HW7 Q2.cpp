//HW7 Q2 Apol Medrano
//Class for a bank certificate of deposit
#include <iostream>
using namespace std;

class CDAccount
{
public:
	CDAccount();
	//intializes CDAccount accountVar balance, interestRate
	// and term to zero
	CDAccount(double theBalance, double theInterestRate, int theTerm);
	//intializes CDAccount accountVar balance, interestRate
	// and term to values within the parenethesis when created
	void Output(ostream& outs);
	//displays current balance, interestRate & term of user's CDaccount
	void userPrompt(CDAccount& theAccount, int Account_ID);
	//Preconditon: User's account is created and intialized
	//Postcondition: Either intialized values remain the same or 
	// user will now go and update it
	void getData(CDAccount& theAccount, int Account_ID);
	//Precondition: User choose to update his account
	//Postcondition: User's inputs are now the balance, interestRate & term
	bool check(double theBalance, double theInterestRate, int theTerm);
	//Precondition: User inputed the balance, interestRate & term
	//Postconditon: User's inputs are legal or illegal
	void set(double theBalance, double theInterestRate, int theTerm);
	//Precondtion: User's inputed balance, interestrate & term are legal
	//Postconditon: User's account will be update will the inputed values
	void Maturity(CDAccount theAccount, int Account_ID);
	//Precondition: User's account is satisfactory to user and has legal values
	//Postcondition: User's account will show the values it will have when matured
	
private:
	double balance;
	double interestRate;
	int term; //months until maturity
};

int main()
{
	CDAccount account1, account2(500.75, 7.5, 6);
	int account1_ID = 1, account2_ID = 2;
	account1.userPrompt(account1, account1_ID);
	account2.userPrompt(account2, account2_ID);
	account1.Maturity(account1, account1_ID);
	account2.Maturity(account2, account2_ID);
	return 0;
}
CDAccount::CDAccount() : balance(0.0), interestRate(0.0), term (0)
{
	
}
CDAccount::CDAccount(double theBalance, double theInterestRate, int theTerm)
{
	balance = theBalance;
	interestRate = theInterestRate;
	term = theTerm;
}
void CDAccount::userPrompt (CDAccount& theAccount, int Account_ID)
{
	char ans;
	cout << "Account " << Account_ID << " statement: ";
	theAccount.Output(cout);
	cout << "Would you like to update it? (Y for Yes, N for N)\n";
	cin >> ans;
	cout << endl;
	if ((ans == 'Y') || (ans == 'y'))
	getData(theAccount, Account_ID);
}
void CDAccount::Output(ostream& outs)
{
	outs.setf(ios::fixed);
	outs.setf(ios::showpoint);
	outs.precision(2);
	outs << "Account balance $" << balance << endl;
	outs << "Interest rate " << interestRate << "%" << endl;
	outs << "Months until maturity: " << term << " months\n";
}
void CDAccount::getData(CDAccount& theAccount, int Account_ID)
{
	double theBalance, theInterestRate;
	int theTerm;
	bool evalution;
	do
	{
		cout << "Account " << Account_ID << ":\n"
		<< "Enter account balance: $";
		cin >> theBalance;
		cout << "Enter account interest rate: ";
		cin >> theInterestRate;
		cout << "Enter the number of months until maturity\n"
		<< "(must be 12 or fewer months): ";
		cin >> theTerm;
		evalution = check(theBalance, theInterestRate, theTerm);
		cout << endl;
	} while (evalution != true);
	theAccount.set(theBalance, theInterestRate, theTerm);
	userPrompt(theAccount, Account_ID);
}
bool CDAccount::check(double theBalance, double theInterestRate, int theTerm)
{
	if ((theBalance < 0) || (theTerm < 0) || (theTerm > 12))
	{
		cout << "Invalid input. Please try again!" << endl;
		return (false);
	}
	else
	return (true);
}
void CDAccount::set(double theBalance, double theInterestRate, int theTerm)
{
	balance = theBalance;
	interestRate = theInterestRate;
	term = theTerm;
}
void CDAccount::Maturity(CDAccount theAccount, int Account_ID)
{
	double rateFraction, interest;
	rateFraction = interestRate / 100.0;
	interest = balance * rateFraction * (term / 12.0);
	balance = balance + interest;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Account " << Account_ID
	<< ":\n" << "When your CD matures in "
	<< term << " months\n"
	<< "with the interest rate of "
	<< interestRate << " percent, \n"
	<< "it will have a balance of $"
	<< balance << endl << endl;
}
