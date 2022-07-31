//Implementation File for Triangle Class
#include "Triangle.h" // Needed for the Rectangle class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
#include "cmath" //Needed in order to square root 
using namespace std;

//initialization of all sides to 0.0

Triangle::Triangle()
{
	side1 = 0.0;
	side2 = 0.0;
	side3 = 0.0;
}

//setSide1 sets value of Side 1

void Triangle::setSide1(double a)
{
	if (a >= 0)
		side1 = a;
	else
	{
		cout << "Invailid Number\n";
		exit(EXIT_FAILURE);
	}
}

//Sets Side 2

void Triangle::setSide2(double b)
{
	if (b >= 0)
		side2 = b;
	else
	{
		cout << "Invailid Number\n";
		exit(EXIT_FAILURE);
	}
}

//Sets Side 3 

void Triangle::setSide3(double c)
{
	if (c >= 0)
		side3 = c;
	else
	{
		cout << "Invailid Number\n";
		exit(EXIT_FAILURE);
	}
}

double Triangle::getPerimeter() const
{
	return (side1 + side2 + side3) / 2;
}

double Triangle::getArea() const
{
	return sqrt(perimeter * (perimeter - side1) * (perimeter - side2) * (perimeter - side3));
}