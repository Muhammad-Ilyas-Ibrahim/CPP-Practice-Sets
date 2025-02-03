#include <iostream>
using namespace std;

// ====================================================
// Class Definition with Default Arguments in Constructor
// ====================================================
// Default arguments allow a constructor to be called with fewer arguments
// by providing default values for some parameters.

class Box
{
private:
    int length;
    int width;
    int height;

public:
    // Constructor with default arguments
    Box(int l = 1, int w = 1, int h = 1)
    {
        length = l;
        width = w;
        height = h;
        cout << "Constructor Called with Length: " << length
             << ", Width: " << width
             << ", Height: " << height << endl;
    }

    // Method to calculate volume
    int calculateVolume()
    {
        return length * width * height;
    }

    // Method to display dimensions
    void displayDimensions()
    {
        cout << "Dimensions: " << length << " x " << width << " x " << height << endl;
    }
};

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Constructors with Default Arguments in C++" << endl;
    cout << "==========================================" << endl;

    // Create objects using different numbers of arguments
    Box box1;          // No arguments (uses all defaults)
    Box box2(5);       // One argument (length = 5, others default)
    Box box3(4, 6);    // Two arguments (length = 4, width = 6, height default)
    Box box4(3, 7, 2); // Three arguments (length = 3, width = 7, height = 2)

    // Display dimensions and volume for each object
    cout << "\nBox 1 (Default):" << endl;
    box1.displayDimensions();
    cout << "Volume: " << box1.calculateVolume() << endl;

    cout << "\nBox 2 (Length = 5):" << endl;
    box2.displayDimensions();
    cout << "Volume: " << box2.calculateVolume() << endl;

    cout << "\nBox 3 (Length = 4, Width = 6):" << endl;
    box3.displayDimensions();
    cout << "Volume: " << box3.calculateVolume() << endl;

    cout << "\nBox 4 (Length = 3, Width = 7, Height = 2):" << endl;
    box4.displayDimensions();
    cout << "Volume: " << box4.calculateVolume() << endl;

    cout << "==========================================" << endl;
    return 0;
}