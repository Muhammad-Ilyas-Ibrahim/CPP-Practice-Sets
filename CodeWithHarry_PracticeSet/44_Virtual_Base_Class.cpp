#include <iostream>
using namespace std;

// ====================================================
// Base Class: Animal
// ====================================================
// This class will act as a virtual base class to avoid
// ambiguity in multiple inheritance.

class Animal
{
protected:
    string name; // Protected attribute: name of the animal

public:
    // Constructor to initialize the name
    Animal(string n) : name(n) {}

    // Method to display the animal's name
    void displayName()
    {
        cout << "Animal: " << name << endl;
    }
};

// ====================================================
// Intermediate Class 1: Mammal (inherits virtually from Animal)
// ====================================================
// This class inherits virtually from Animal to avoid
// ambiguity in multiple inheritance.

class Mammal : virtual public Animal
{
public:
    // Constructor to initialize the name
    Mammal(string n) : Animal(n) {}

    // Method specific to mammals
    void feedMilk()
    {
        cout << name << " is feeding milk." << endl;
    }
};

// ====================================================
// Intermediate Class 2: Bird (inherits virtually from Animal)
// ====================================================
// This class inherits virtually from Animal to avoid
// ambiguity in multiple inheritance.

class Bird : virtual public Animal
{
public:
    // Constructor to initialize the name
    Bird(string n) : Animal(n) {}

    // Method specific to birds
    void fly()
    {
        cout << name << " is flying." << endl;
    }
};

// ====================================================
// Derived Class: Bat (Multiple Inheritance)
// ====================================================
// The Bat class inherits from both Mammal and Bird.
// Since both Mammal and Bird inherit virtually from Animal,
// there is no ambiguity in accessing the 'name' attribute.

class Bat : public Mammal, public Bird
{
public:
    // Constructor to initialize the name
    Bat(string n) : Animal(n), Mammal(n), Bird(n) {}

    // Method to display bat details
    void displayDetails()
    {
        displayName(); // Call base class method
        feedMilk();    // Call Mammal method
        fly();         // Call Bird method
    }
};

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Virtual Base Class in C++" << endl;
    cout << "==========================" << endl;

    // Create an object of the Bat class
    Bat myBat("Fruit Bat");

    // Display bat details
    cout << "\nBat Details:" << endl;
    myBat.displayDetails();

    cout << "==========================" << endl;
    return 0;
}