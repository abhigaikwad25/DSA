#include<iostream>
using namespace std;

class Parent{
    public:
    string name;
    int height;
    int age;

    void parentSay(){
        cout<<"Padhai Karo"<<endl;
    }
};

class Child_1:public Parent{
    public:
    string childName;
    int childAge;

    void childSay(){
        cout<<"Badme Karunga"<<endl;
    }
};

class Child_2:public Child_1{
    
};

int main(){
    Child_2 obj1;
    obj1.parentSay();
    obj1.childSay();
    cout<<obj1.height<<endl;
    cout<<obj1.childAge<<endl;
}