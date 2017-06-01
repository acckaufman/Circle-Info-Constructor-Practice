#include "Circle.h"
using namespace std;

//Default constructor, no arguments
Circle::Circle()
{
	radius = 0;
	pi = 3.14159;
}

//Constructor #2, accepts radius as argument when the object is initiated
Circle::Circle(double r)
{
	radius = r;
	pi = 3.14159;
}

//Mutator function to manually assign a radius passed to the function as a parameter
void Circle::setRadius(double r)
{
	radius = r;
}

//Accessor functions
double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return (pi * radius * radius);
}

double Circle::getDiameter() const
{
	return (radius * 2);
}

double Circle::getCircumference() const
{
	return (2 * pi * radius);
}

//Deconstructor
Circle::~Circle()
{
}
