//File Name: 2WaterBottle.cpp
//Author: Apol Medrano
//Email Adress: MedranoA@heritage.edu
//Assignment Number: ?
//Description: Trying out more if-else possibilities
//Last Changed: August 28, 2023
#include <iostream>
using namespace std;
int main ()
{
	double WaterBottle;
	
	cout << "Press the return key after inputing a number. \n";
	cout << "Enter in your current water level in your water bottle. (Percentage in decimal form please!)" << endl;
	cin >> WaterBottle;
	cout << endl;
	
	if (WaterBottle > 1)
	{
		cout << "Too high." << endl
			 << "I meant like a percentage, but without a percentage sign. Y'know decimals. \n"
			 << "So, like a 0.8 or 0.5 or like a 0.25. Numbers along those lines. " << endl
			 << "I'll just have you retry it but now you have the knowledge to gain this program's full capabilites. \n";		
	}
	else if ((WaterBottle >= 0.8) && (WaterBottle <= 1))
	{
		cout << "Wow. You either barely filled it up or you need to be drinking more water. \n"
			 << "I pray for your sake that you just got done filling it up, because you need to be drinking more water then. \n"
			 << "Not playing dawg. \n" 
			 << endl
			 << "But, on the other hand, you could've just drank a bunch of water." << endl
			 << "So, continue drinking water & filling that bottle up, hombre. \n";
	}		
	else if ((WaterBottle > 0.6) && (WaterBottle < 0.8))
	{
		cout << "You're doing good! So don't stop sipping dawg!" << endl;
	}
	else if ((WaterBottle >= 0.5) && (WaterBottle <= 0.6))
	{
		cout << "You're better much halfway done with your water bottle!" << endl
		     << "You should start thinking about filling up whenever you are able to :)" << endl;
	}
	else if ((WaterBottle > 0.25) && (WaterBottle < 0.5))
	{
		cout << "Hey bud, your water is getting quite low." << endl
		   	 << "Consider filling it up when given the chance!" << endl;
	}
	else if ((WaterBottle > 0.1) && (WaterBottle <= 0.25))
	{
		cout << "Ehrm. You should really fill up your water." << endl
			 << "*Gulp*" << endl
			 << "You should really *Gulp* fill *Gulp* your *Gulp* water bottle. \n"
			 << "Like I am not kidding, go fill it up now." << endl
			 << "If you can, of course :)" << endl;
    }
	else if ((WaterBottle > 0.01) && (WaterBottle <= 0.1))
	{
		cout << "I AM NOT PLAYING FILL UP YOUR WATER NOWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW!!!!!!! \n";
		cout << "plzzzzzzzzzzzzzzzzzzzzzzz" << endl;
    }
	else if ((WaterBottle > 0.0000000001) && (WaterBottle <= 0.01))
	{
		cout << "YOU SERIOUSLY NEED TO FILL IT UP" << endl
			 << "I DON'T CARE WHO YOU ARE, WHERE YOU ARE, WHAT TIME IT IS OR HOW YOUR DAY IS GOING" << endl
		 	 << "FILL UP YOUR WATER BROOOOOOOOOOOOOOOOOOOOOOOO \n"
		 	 << "THIS IS NO LONGER FUNNY, IT IS HURTING, IT IS HURTING ME BAAAAAADDDDDDDDDDDDDDD" << endl
		 	 << "DO IT NOWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
    }
	else if ((WaterBottle > 0.0000000000001) && (WaterBottle <= 0.0000000001))
	{
		cout << "Now you are just playing." << endl
			 << "Disapointing." << endl;
    }
    else
    {
    	cout << "You put a invalid number or character. Please follow instructions correctly by reading the prompts in the beginning.\n";
	}
	
	cout << endl;
	cout << "So in total, drink water, stay hydrated and live good!" << endl;
	cout << "Thank you!";
	return 0;
}
