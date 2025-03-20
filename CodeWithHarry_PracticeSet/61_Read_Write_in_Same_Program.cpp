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
// Function to Append Data to a File
// ====================================================
void appendToFile(const string &filename, const string &data)
{
    // Create an output file stream object in append mode
    ofstream outFile(filename, ios::app);

    // Check if the file was opened successfully
    if (!outFile)
    {
        cerr << "Error: Unable to open file for appending!" << endl;
        return;
    }

    // Append data to the file
    outFile << data;

    // Close the file
    outFile.close();

    cout << "Data appended to file successfully!" << endl;
}

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "File I/O in C++: Read/Write in the Same Program" << endl;
    cout << "===============================================" << endl;

    // File name
    string filename = "example.txt";

    // Data to write to the file
    string data = "Hello, this is a sample text file.\n"
                  "This file is created using C++ file I/O.\n"
                  "You can read and write files easily in C++!\n";

    // Write data to the file
    writeToFile(filename, data);

    // Read data from the file
    readFromFile(filename);

    // Data to append to the file
    string appendData = "This line is appended to the file.\n";

    // Append data to the file
    appendToFile(filename, appendData);

    // Read data from the file again to show the appended content
    readFromFile(filename);

    cout << "===============================================" << endl;
    return 0;
}