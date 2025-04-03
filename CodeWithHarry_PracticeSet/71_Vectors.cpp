#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying the vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";    // We can also use 'at' 
    }
    cout << endl;
}

int main()
{
    // vector<int> vec1;
    // int element;
    // int size;
    // cout<<"Enter the size of vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    
    // //pop_back
    // vec1.pop_back();
    // display(vec1);
    // // iterators for insert fuction
    // vector <int> :: iterator iter = vec1.begin(); // begin() returns the frist index 
    // vec1.insert(iter,566);
    // display(vec1);
    // // specify index where to insert
    // vec1.insert(iter+1,96); // We can also specify index in this way
    // display(vec1);
    // // Copies to be inserted
    // vec1.insert(iter+1, 5, 96); // We can also specify how much copies of that should be inserted ,here we used 5
    // display(vec1);

    vector <char> vec2(4); // 4-element character vector 
    vec2.push_back(67);
    display(vec2);
    vector <char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);
    vector <int> vec4(6, 3); // 6-element character vector of 3s (repitition )
    display(vec4);
    return 0;
}