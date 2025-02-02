#include <iostream>
using namespace std;

// ====================================================
// Class Definition with Constructor Overloading
// ====================================================
// Constructor overloading allows multiple constructors
// with different parameters in the same class.

class Rectangle
{
private:
    int length;
    int width;

public:
    // Default Constructor (no parameters)
    Rectangle()
    {
        length = 0;
        width = 0;
        cout << "Default Constructor Called!" << endl;
    }

    // Parameterized Constructor (one parameter)
    Rectangle(int side)
    {
        length = side;
        width = side;
        cout << "Parameterized Constructor (Square) Called!" << endl;
    }

    // Parameterized Constructor (two parameters)
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
        cout << "Parameterized Constructor (Rectangle) Called!" << endl;
    }

    // Method to calculate area
    int calculateArea()
    {
        return length * width;
    }

    // Method to display dimensions
    void displayDimensions()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Constructor Overloading in C++" << endl;
    cout << "==============================" << endl;

    // Create objects using different constructors
    Rectangle rect1;       // Default constructor
    Rectangle rect2(5);    // Parameterized constructor (square)
    Rectangle rect3(4, 6); // Parameterized constructor (rectangle)

    // Display dimensions and area for each object
    cout << "\nRectangle 1 (Default):" << endl;
    rect1.displayDimensions();
    cout << "Area: " << rect1.calculateArea() << endl;

    cout << "\nRectangle 2 (Square):" << endl;
    rect2.displayDimensions();
    cout << "Area: " << rect2.calculateArea() << endl;

    cout << "\nRectangle 3 (Rectangle):" << endl;
    rect3.displayDimensions();
    cout << "Area: " << rect3.calculateArea() << endl;

    cout << "==============================" << endl;
    return 0;
}