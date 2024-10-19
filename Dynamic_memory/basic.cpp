#include<iostream>
using namespace std;

void passByVal(int i){
    i++;
}

void passByRef(int& j){
    j++;
}

int main(){
    int i=5;
    int j=5;

    //pass by value
    cout<<"Before using pass by value : "<<i<<endl;
    passByVal(i);
    cout<<"After using pass by value : "<<i<<endl;
    cout<<endl;

    //pass by reference 
    cout<<"Before using pass by value : "<<j<<endl;
    passByRef(j);
    cout<<"After using pass by value : "<<j<<endl;
}