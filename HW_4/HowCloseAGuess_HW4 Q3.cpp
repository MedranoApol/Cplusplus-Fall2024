//Hw4 Q3
//Apol Medrano
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{	//generates a random number
	srand(time(0));
	int randomDigit1 = rand() % 10;
	int randomDigit2 = rand() % 10;
	//prompts user to guess the number
	cout << "Enter a 2 digit number: ";
	int guess;
	cin >> guess;
	int guessDigit1 = guess/10; //finds tens digit
	int guessDigit2 = guess%10; //finds ones digit
	//displays random number to the user	
	cout << "Random number is " << randomDigit1 << randomDigit2 << endl;
	//displays if their guess is a winner or not
	if (randomDigit1 == guessDigit1 && randomDigit2 == guessDigit2)
	{//guessed number correctly
		cout << "Your guess was correct! You get $10,000!" << endl;	
	}
	else if (randomDigit1 == guessDigit2 && randomDigit2 == guessDigit1)
	{//guess had the same digit numbers but was not random number
		cout << "Your guess had the same digits as the random number! You get $3,000!" << endl;
	}
	else if (randomDigit1 == guessDigit1 || randomDigit1 == guessDigit2 || randomDigit2 == guessDigit1 || randomDigit2 == guessDigit2)
	{//guess had one digit that was the same as  random number
		cout << "One of your digits was the same as the random number! You get $1,000!" << endl;
	}
	else
	{//guess had none of the win conditions
		cout << "You lose!" << endl;
	}
	return 0;
}
		

