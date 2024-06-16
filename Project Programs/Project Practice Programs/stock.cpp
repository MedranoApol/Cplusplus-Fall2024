//Implementation file stock.cpp:
//This is the IMPLEMENTATION of the ADT Stock
//The interface for the class Stock is in the header file stock.h.
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "stock.h"
using namespace std;

Stock::Stock() : food(""), quantity(0), price (0.0)
{

}
Stock::Stock(string foodName, int theQuantity, double thePrice) : food(foodName), quantity(theQuantity), price(thePrice)
{
	
}

//uses iostream
istream& operator >>(istream& ins, Stock& theObject)
{
	cin.ignore();
	cout << "Enter food title: ";
	getline(ins,theObject.food);
	cout << "Enter quanity of food item: ";
	ins >> theObject.quantity;
	cout << "Enter food item price: ";
	ins >> theObject.price;
}
//uses iostream
ostream& operator <<(ostream& outs, const Stock& theObject)
{
	outs << "Food Title: " << theObject.food << "\n";
	outs << "Quantity of Item: " << theObject.quantity << "\n";
	outs << "Price of Item: " << theObject.price << "\n";
}
