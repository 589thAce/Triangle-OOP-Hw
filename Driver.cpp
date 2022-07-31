#include <iostream>
#include "Triangle.h" // Needed for Triangle class
using namespace std;

int main()
{

    double side1;  // Side 1 of the triangle
    double side2;  // Side 2 of the triangle
    double side3;  // Side 3 of the triangle

    Triangle t;	// Object t

        // Get the three sides of the triangle from user
    cout << "Enter the Side 1: ";
    cin >> side1;
    cout << "Enter the Side 2: ";
    cin >> side2;
    cout << "Enter the Side 3: ";
    cin >> side3;


    cout << "The Perimeter is :" << Triangle::getPerimeter;
    cout << "The Area is:" << Triangle::getArea;
}
