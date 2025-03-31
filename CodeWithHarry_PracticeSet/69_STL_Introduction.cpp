#include <iostream>
#include <vector>    // Include the vector header
#include <algorithm> // Include the algorithm header
using namespace std;

// This was just a introduction video of STL but I searched on internet and practiced it myself

int main()
{
    cout << "The C++ Standard Template Library (STL)" << endl;
    cout << "=======================================" << endl;

    // Using STL Vector
    vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Display vector elements
    cout << "Original vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Sorting the vector using STL sort
    sort(numbers.begin(), numbers.end());

    // Display sorted vector
    cout << "Sorted vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Using STL find to search for an element
    int searchValue = 9;
    auto it = find(numbers.begin(), numbers.end(), searchValue);
    if (it != numbers.end())
    {
        cout << searchValue << " found at position: " << (it - numbers.begin()) << endl;
    }
    else
    {
        cout << searchValue << " not found in the vector." << endl;
    }

    cout << "=======================================" << endl;
    return 0;
}

