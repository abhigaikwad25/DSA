#include<iostream>
using namespace std;
#include<list>

int main(){
    list<int> l;

    //initialize the xyz list with element
    //list<int> xyz(a,b);
    // a : No. of times
    // b : digit 
    list<int> xyz(10,100);
    // copy the element of xyz in newlist
    list<int> newlist(xyz);

    cout<<"Element in new list : ";
    for(int i:newlist){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);
 
    // l.pop_back();
    // l.pop_front();

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list : "<<l.size()<<endl;
    l.erase(l.begin());

    cout<<"After Erase : "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
}
