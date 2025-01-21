#include <iostream>
using namespace std;

// ====================================================
// Class Definition
// ====================================================
// A class is a blueprint for creating objects.
// It encapsulates data (attributes) and functions (methods).

class Car
{
private:
    string brand; // Private attribute: brand of the car
    int year;     // Private attribute: manufacturing year

public:
    // Constructor to initialize the object
    Car(string b, int y)
    {
        brand = b;
        year = y;
    }

    // Public method to display car details
    void displayDetails()
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }

    // Public method to update the manufacturing year
    void updateYear(int newYear)
    {
        year = newYear;
    }
};

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Object-Oriented Programming in C++" << endl;
    cout << "==================================" << endl;

    // Create an object of the Car class
    Car myCar("Toyota", 2020);

    // Display the car's details
    cout << "Initial Car Details:" << endl;
    myCar.displayDetails();

    // Update the car's manufacturing year
    myCar.updateYear(2022);

    // Display the updated car details
    cout << "\nUpdated Car Details:" << endl;
    myCar.displayDetails();

    cout << "==================================" << endl;
    return 0;
}