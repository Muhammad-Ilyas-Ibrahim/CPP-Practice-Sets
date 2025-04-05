#include <iostream>
#include <map>
#include <string>
using namespace std;
// Maps is an assiciative array
// We can also use templates here to make display function useful for all data types
void display(map<string, int> &marksMap)
{
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    }
}
int main()
{
    map<string, int> marksMap;
    marksMap["Ilyas"] = 98;
    marksMap["Ammad"] = 96;
    marksMap["Bilal"] = 89;
    display(marksMap);
    cout<<endl;
    // Maps Insertion
    marksMap.insert({{"Waqas", 92}, {"Moavia", 85}});
    display(marksMap);

    //Size of Map
    cout<<"The size of Map is " << marksMap.size()<<endl;
    
    //Max size of Map
    cout<<"The maximum size of Map is " << marksMap.max_size() <<endl;

    // Emptying the Map
    marksMap.clear();
    // marksMap.empty();
    display(marksMap); // nothing will be displayed here because map is cleared


    cout << "\nProgram finished successfully" << endl;
    return 0;
}