#include <iostream>
#include <list>
using namespace std;
// List is like arrays

void display(list<int> list1){
    list<int> :: iterator it;
    for(it = list1.begin(); it != list1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
list<int> list1; // List of length 0
list <int> list2(5); // List of of size 5
list1.push_back(24);
list1.push_back(5);
list1.push_back(17);
list1.push_back(45);
list1.push_back(31);
list<int> :: iterator iter; // iter is pointer pointing to the first element of the list
// iter = list1.begin();
// cout<< *iter<<endl;
// iter++;
// cout<< *iter<<endl;
display(list1);

list1.remove(27);
display(list1); // 27 is removed from list

list1.pop_front(); // remove first element from list
display(list1);

list1.insert(list1.end(), 11); // insert element at last
display(list1); 

list1.sort(); // sort list
display(list1);

list<int> list3;
list3.push_back(98);
list3.push_back(24);
list3.push_back(32);
list3.push_back(18);
display(list3);
list3.sort();
display(list3);

list1.merge(list3); // merge list1 with list2
display(list1);

list1.reverse(); // reversinf the list
display(list1);
return 0;
}