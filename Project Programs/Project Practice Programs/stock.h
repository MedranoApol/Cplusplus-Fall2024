//header file stock.h: This is the INTERFACE for the class Stock.
#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>
using namespace std;

class Stock
{
public:
	Stock();
	//Intializes food, quantity, & price to zero (or empty)
	Stock(string foodName, int theQuantity, double thePrice);
	//Intializes food, quantity, & price to programmers value
	friend istream& operator >>(istream& ins, Stock& theObject);
	//Overloads the >> operator for input values of type Stock.
	//Precondition: If ins is a file input stream, then ins has already been
	//connected to a file.
	friend ostream& operator <<(ostream& outs, const Stock& theObject);
	//Overloads the << operator for output values of type Stock.
	//Precondition: If outs is a file output stream, then outs has already been
	//connected to a file.
private:
	string food;
	int quantity;
	double price;
};

#endif//STOCK_H
