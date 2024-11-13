#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int lifespan;

    public:
    void bark(){
        cout<<"Barking - From Animal Class"<<endl;
    }
};

class Human{
    public:
    string color;

    void speak(){
        cout<<"Speaking - From Human Class"<<endl;
    }
};

class Child:public Animal,public Human{
    
};

int main(){
    Child obj1;
    obj1.bark();
    obj1.speak();
    cout<<obj1.name<<endl;
    cout<<obj1.color<<endl;
}