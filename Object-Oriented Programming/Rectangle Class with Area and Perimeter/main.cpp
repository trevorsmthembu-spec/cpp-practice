#include <iostream>
using namespace std;

class Rectangle
{
    private:
    double length;
    double width;

    public:
    // Default constructor
    Rectangle() : length(0), width(0) { }
    // Constructor to initialize the Rectangle object with length and width
    Rectangle(int lengthP, int widthP) : length(lengthP), width(widthP) { }

    // Member function for calculating the area
    double calcArea() const
    {
        return length * width;
    }
    // Member function for calculating the perimeter
    int calcPerimeter() const
    {
        return 2 * (length + width);
    }
    // Member function for setting the length
    void setLength(int lengthP)
    {
        length = lengthP;
    }
    // Member function for setting the width
    void setWidth(int widthP)
    {
        width = widthP;
    }
};

int main ()
{
    Rectangle r1, r2(10, 4); // Declaring the first & second rectangle objects and initializing the l and w for the second rectangle object

    r1.setWidth(8); // Setting the width for the first rectangle
    r1.setLength(17); // Setting the length for the first rectangle

    cout << "Area: " << r1.calcArea() << endl; // Output the calculated area
    cout << "Perimeter: " << r1.calcPerimeter() << endl; // Output the calculated perimeter

    cout << "Area: " << r2.calcArea() << endl; 
    cout << "Perimeter: " << r2.calcPerimeter() << endl;

    return 0;
}