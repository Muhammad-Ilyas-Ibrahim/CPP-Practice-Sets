#include <iostream>
using namespace std;

// ====================================================
// Base Class: Vehicle
// ====================================================
// The base class contains common properties and methods
// that can be inherited by derived classes.

class Vehicle
{
protected:
    string brand; // Protected attribute: brand of the vehicle

public:
    // Constructor to initialize the brand
    Vehicle(string b) : brand(b) {}

    // Method to display the brand
    void displayBrand()
    {
        cout << "Brand: " << brand << endl;
    }

    // Virtual method to display vehicle type (to be overridden)
    virtual void displayType()
    {
        cout << "This is a generic vehicle." << endl;
    }
};

// ====================================================
// Derived Class: Car (Single Inheritance)
// ====================================================
// The Car class inherits from the Vehicle class.
// It adds its own specific properties and methods.

class Car : public Vehicle
{
private:
    int numDoors; // Specific attribute: number of doors

public:
    // Constructor to initialize brand and number of doors
    Car(string b, int doors) : Vehicle(b), numDoors(doors) {}

    // Method to display car details
    void displayDetails()
    {
        displayBrand(); // Call base class method
        cout << "Number of Doors: " << numDoors << endl;
    }

    // Override the displayType method
    void displayType() override
    {
        cout << "This is a Car." << endl;
    }
};

// ====================================================
// Derived Class: Bike (Single Inheritance)
// ====================================================
// The Bike class inherits from the Vehicle class.
// It adds its own specific properties and methods.

class Bike : public Vehicle
{
private:
    bool hasBasket; // Specific attribute: whether the bike has a basket

public:
    // Constructor to initialize brand and basket status
    Bike(string b, bool basket) : Vehicle(b), hasBasket(basket) {}

    // Method to display bike details
    void displayDetails()
    {
        displayBrand(); // Call base class method
        cout << "Has Basket: " << (hasBasket ? "Yes" : "No") << endl;
    }

    // Override the displayType method
    void displayType() override
    {
        cout << "This is a Bike." << endl;
    }
};

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Inheritance and Its Types in C++" << endl;
    cout << "================================" << endl;

    // Create objects of derived classes
    Car myCar("Toyota", 4);
    Bike myBike("Hero", true);

    // Display details of the car
    cout << "\nCar Details:" << endl;
    myCar.displayDetails();
    myCar.displayType();

    // Display details of the bike
    cout << "\nBike Details:" << endl;
    myBike.displayDetails();
    myBike.displayType();

    cout << "================================" << endl;
    return 0;
}