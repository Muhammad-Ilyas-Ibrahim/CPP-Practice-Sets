#include <iostream>
#include <fstream> // Include the file stream library
using namespace std;

// ====================================================
// Function to Write Data to a File
// ====================================================
void writeToFile(const string &filename, const string &data)
{
    // Create an output file stream object
    ofstream outFile(filename);

    // Check if the file was opened successfully
    if (!outFile)
    {
        cerr << "Error: Unable to open file for writing!" << endl;
        return;
    }

    // Write data to the file
    outFile << data;

    // Close the file
    outFile.close();

    cout << "Data written to file successfully!" << endl;
}

// ====================================================
// Function to Read Data from a File
// ====================================================
void readFromFile(const string &filename)
{
    // Create an input file stream object
    ifstream inFile(filename);

    // Check if the file was opened successfully
    if (!inFile)
    {
        cerr << "Error: Unable to open file for reading!" << endl;
        return;
    }

    // Read data from the file
    string line;
    cout << "Contents of the file:" << endl;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    // Close the file
    inFile.close();
}

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "File I/O in C++: Working with Files" << endl;
    cout << "===================================" << endl;

    // File name
    string filename = "example.txt";

    // Data to write to the file
    string data = "Hello, this is a sample text file.\n"
                  "This file is created using C++ file I/O.\n"
                  "You can read and write files easily in C++!";

    // Write data to the file
    writeToFile(filename, data);

    // Read data from the file
    readFromFile(filename);

    cout << "===================================" << endl;
    return 0;
}