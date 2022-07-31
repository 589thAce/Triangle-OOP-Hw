#pragma once
//specification for Triangle class.
#ifndef TRIANGLE_H
#define TRIANGLE_H

//Triangle Class Clarification 

class Triangle
{
private:
	double side1;
	double side2;
	double side3;
	double perimeter;
	double area;
public:
	Triangle(); //Default Constructor
	void setSide1(double);
	void setSide2(double);
	void setSide3(double);
	double getPerimeter() const;
	double getArea() const;
};

#endif
