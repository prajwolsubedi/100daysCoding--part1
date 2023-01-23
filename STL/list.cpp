//STL list
//made using doubly linked list.

#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l;

    list<int> n(5,100);
    cout<<"Printing n : "<<endl;
    for(int i: n){
        cout<<i<<" ";
    }

    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    //begin is the first element (in front).
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"Size of list "<<l.size()<<endl;
}