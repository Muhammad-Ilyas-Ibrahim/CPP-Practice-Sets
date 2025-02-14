#include <iostream>
using namespace std;

// ====================================================
// Base Class: Shape
// ====================================================
// The base class contains common properties and methods
// for all shapes.

class Shape
{
protected:
    string name; // Protected attribute: name of the shape

public:
    // Constructor to initialize the name
    Shape(string n) : name(n) {}

    // Virtual method to calculate area (to be overridden)
    virtual double calculateArea()
    {
        cout << "Area calculation not defined for generic shape." << endl;
        return 0;
    }

    // Method to display the shape's name
    void displayName()
    {
        cout << "Shape: " << name << endl;
    }
};

// ====================================================
// Derived Class: Circle (Single Inheritance)
// ====================================================
// The Circle class inherits from the Shape class.
// It adds its own specific properties and methods.

class Circle : public Shape
{
private:
    double radius; // Specific attribute: radius of the circle

public:
    // Constructor to initialize name and radius
    Circle(string n, double r) : Shape(n), radius(r) {}

    // Override the calculateArea method
    double calculateArea() override
    {
        return 3.14159 * radius * radius; // Area = πr²
    }

    // Method to display circle details
    void displayDetails()
    {
        displayName(); // Call base class method
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

// ====================================================
// Derived Class: Rectangle (Single Inheritance)
// ====================================================
// The Rectangle class inherits from the Shape class.
// It adds its own specific properties and methods.

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // Constructor to initialize name, length, and width
    Rectangle(string n, double l, double w) : Shape(n), length(l), width(w) {}

    // Override the calculateArea method
    double calculateArea() override
    {
        return length * width; // Area = length * width
    }

    // Method to display rectangle details
    void displayDetails()
    {
        displayName(); // Call base class method
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Exercise on Inheritance in C++" << endl;
    cout << "==============================" << endl;

    // Create objects of derived classes
    Circle myCircle("Circle", 5.0);
    Rectangle myRectangle("Rectangle", 4.0, 6.0);

    // Display details of the circle
    cout << "\nCircle Details:" << endl;
    myCircle.displayDetails();

    // Display details of the rectangle
    cout << "\nRectangle Details:" << endl;
    myRectangle.displayDetails();

    cout << "==============================" << endl;
    return 0;
}