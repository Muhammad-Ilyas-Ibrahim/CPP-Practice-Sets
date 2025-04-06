#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
// Functions Objects (Functor) : Function wrapped in a class so that it available like an object

// template<class T>
// void display(T arr[]){
//     for(int i = 0; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    int arr[] = {31,12,23,47,25,61,37,58};
    sort(arr, arr+5); // It will sort only first 5 elements of  the array 
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // display(arr); // not working i dont know why
    
    sort(arr, arr+5, greater<int>()); // It will be sorted in decending order but by default sort function sorts in
                                      // ascending order
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}