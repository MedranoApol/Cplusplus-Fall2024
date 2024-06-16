#include <iostream>
using namespace std;

class PlaceArea
{
public:
	PlaceArea();
	PlaceArea(double theLength, double theWidth, double theHeight);
	friend istream& operator >>(istream& ins, PlaceArea& place);
	friend ostream& operator <<(ostream& outs, const PlaceArea& place);
private:
	double length;
	double width;
	double height;
	double area;
};

int main(){
	PlaceArea store;
	cout << "Enter the length, width and height:\n";
	cin >> store;
	cout << store;
	return 0;
}
PlaceArea::PlaceArea(): length(0.0), width(0.0), height(0.0), area(0.0)
{
	
}
PlaceArea::PlaceArea(double theLength, double theWidth, double theHeight)
: length(theLength), width(theWidth), height(theHeight)
{
	area = (2*(theLength* theWidth + theHeight * theLength + theHeight * theWidth));
}
istream& operator >>(istream& ins, PlaceArea& place)
{
	ins >> place.length;
	ins >> place.width;
	ins >> place.height;
	place.area = (2*(place.length* place.width + place.height * place.length + place.height * place.width));
}
ostream& operator <<(ostream& outs, const PlaceArea& place)
{
	outs << "Length: " << place.length << "\n";
	outs << "Width: " << place.width << "\n";
	outs << "Height: " << place.height << "\n";
	outs << "Area: " << place.area << "\n";
}
