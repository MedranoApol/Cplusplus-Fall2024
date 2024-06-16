//HW4 Q4
//Apol Medrano
#include <iostream>
using namespace std;

double area (double diameter);
//calculates area of circle given the diameter
//returns the area for that circle

double area (long double sideLength);
//calculates area of square given a side length
//returns area for that given square

double area (double base, double height);
//calculates area of triangle given base and height
//returns area for that given triangle values

int main ()
{
	double a, b;
	long double c;
	char selection;
	
	cout << "What area would you like to calculate?" << endl
		 << "A. Area of Cirlce" << endl 
		 << "B. Area of Square" << endl
		 << "C. Area of Triangle" << endl;
	cin >> selection;
		
		switch (selection)//allows use to choose what area they would like to calculate
		{//when they choose, they will prompted enter the values they know to make calculation possible
			case 'A':
			case 'a'://cirlce area
				cout << "The diameter of the circle is: ";
				cin >> a;
				cout << "The area of the circle is " << area(a) << "." << endl;
				break;
			case 'B':
			case 'b'://square area
				cout << "The side length of the square is: ";
				cin >> c;
				cout << "The area of the square is " << area(c) << "." << endl;
				break;
			case 'C':
			case 'c'://triangle area
				cout << "The base length of the triangle is: ";
				cin >> a;
				cout << "The height of the triangle is: ";
				cin >> b;
				cout << "The area of the triangle is " << area(a,b) << "." << endl;
				break;
			default:
				cout << "Invalid character." << endl;		
		}
}

double area (double diameter)
{
	const double PI = 3.14159;
	double radius, area;
	//equation for area of cirlce
	radius = diameter/2;
	area = PI * radius * radius;
	return (area);
}

double area (long double sideLength) 
{
	double area;
	//equation for area of square
	area = sideLength * sideLength;
	return (area);
}

double area (double base, double height)
{
	double area;
	//equation for area of triangle
	area = (base * height);
	area /= 2;
	return (area);
}
