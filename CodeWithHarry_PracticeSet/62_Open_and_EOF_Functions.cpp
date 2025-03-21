#include <iostream>
#include <fstream> 
using namespace std;

// ====================================================
// Function to Write Data to a File
// ====================================================
void writeToFile(const string &filename, const string &data)
{
    // Create an output file stream object
    ofstream outFile;

    // Open the file using the open() function
    outFile.open(filename);

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
    ifstream inFile;

    // Open the file using the open() function
    inFile.open(filename);

    // Check if the file was opened successfully
    if (!inFile)
    {
        cerr << "Error: Unable to open file for reading!" << endl;
        return;
    }

    // Read data from the file until the end of file (EOF)
    string line;
    cout << "Contents of the file:" << endl;
    while (!inFile.eof())
    { // Check for end of file
        getline(inFile, line);
        if (!line.empty())
        { // Avoid printing empty lines at the end
            cout << line << endl;
        }
    }

    inFile.close();
}

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "File I/O in C++: open() and eof() functions" << endl;
    cout << "===========================================" << endl;

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

    cout << "===========================================" << endl;
    return 0;
}