#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	double radius;	//To hold the radius entered by the user

	//Part 1: Demonstrate that the default constructor works with the mutator function
	cout << "Iteration 1: Using the default constructor." << endl << endl;
	cout << "Please enter the radius of Circle #1 now: ";
	cin >> radius;

	//Create the first instance of a Circle object, with no parameters so the default constructor is used.
	Circle circle1;

	//Since the default constructor assigned the radius to 0, we must manually change it to the number entered by the user.
	circle1.setRadius(radius);

	//Report the information about the circle to the user.
	cout << endl;
	cout << "Information about Circle #1:" << endl;
	cout << "Radius: " << circle1.getRadius() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	cout << "Diameter: " << circle1.getDiameter() << endl;
	cout << "Circumference: " << circle1.getCircumference() << endl << endl;

	//Part 2: Demonstrate that constructor #2 correctly receives the radius as a parameter and assigns it to the object's attribute upon initiation
	cout << "Iteration 2: Using constructor #2." << endl << endl;
	cout << "Please enter the radius of Circle #2 now: ";
	cin >> radius;

	//Create the second instance of a Circle object, sending the radius as a parameter to be used in constructor #2
	Circle circle2(radius);

	//Report the information about the circle to the user.
	cout << endl;
	cout << "Information about Circle #2:" << endl;
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Diameter: " << circle2.getDiameter() << endl;
	cout << "Circumference: " << circle2.getCircumference() << endl << endl;

	//Pause and hold the window open
	system("pause");

	return 0;
}