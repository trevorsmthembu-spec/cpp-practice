#include <iostream>
using namespace std;

const double PI = 3.14159;

class Circle // Define a class named Circle
{
    private:
    double radius;

    public:
    Circle() : radius(0) { }
    // Constructor to initialize the Circle object with a radius
    Circle (double radiusP) : radius(radiusP) {}

    // Member function to calculate the area of the circle
    double CalculateArea() const
    {
        return PI * (radius * radius);
    }

    // Member function to calculate the circumference of the circle
    double CalcCircumference() const
    {
        return 2 * PI * radius;
    }

    // Member function to set the radius of the circle
    void setRadius(double radiusP)
    {
        radius = radiusP;
    }
};

int main ()
{
    Circle c1;

    c1.setRadius(7.9); // Setting the radius of the circle

    cout << c1.CalculateArea() << endl; // Displaying the area of the circle
    cout << c1.CalcCircumference() << endl; //Displaying the circumference of the circle

    return 0;
}