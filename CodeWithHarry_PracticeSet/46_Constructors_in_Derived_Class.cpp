#include <iostream>
using namespace std;

// ====================================================
// Base Class: Vehicle
// ====================================================
// The base class contains common properties and methods
// for all vehicles.

class Vehicle
{
protected:
    string brand; // Protected attribute: brand of the vehicle

public:
    // Base class constructor
    Vehicle(string b) : brand(b)
    {
        cout << "Vehicle Constructor Called! Brand: " << brand << endl;
    }

    // Method to display the brand
    void displayBrand()
    {
        cout << "Brand: " << brand << endl;
    }
};

// ====================================================
// Derived Class: Car
// ====================================================
// The Car class inherits from the Vehicle class.
// It adds its own specific properties and methods.

class Car : public Vehicle
{
private:
    int numDoors; // Specific attribute: number of doors

public:
    // Derived class constructor
    Car(string b, int doors) : Vehicle(b), numDoors(doors)
    {
        cout << "Car Constructor Called! Number of Doors: " << numDoors << endl;
    }

    // Method to display car details
    void displayDetails()
    {
        displayBrand(); // Call base class method
        cout << "Number of Doors: " << numDoors << endl;
    }
};

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Constructors in Derived Class in C++" << endl;
    cout << "====================================" << endl;

    // Create an object of the Car class
    Car myCar("Toyota", 4);

    // Display car details
    cout << "\nCar Details:" << endl;
    myCar.displayDetails();

    cout << "====================================" << endl;
    return 0;
}