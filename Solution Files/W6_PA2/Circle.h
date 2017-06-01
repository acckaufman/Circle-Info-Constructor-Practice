#pragma once
using namespace std;

class Circle
{
private:
	double radius;
	double pi;
public:
	//Constructors
	Circle();
	Circle(double r);

	//Mutator functions
	void setRadius(double);

	//Accessor functions
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;

	//Deconstructor
	~Circle();
};

