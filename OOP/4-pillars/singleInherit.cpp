#include<iostream>
using namespace std;

class Animal{
    public:
        string name;
        int lifespan;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{
    
};

int main(){
    Dog obj1;
    obj1.speak();
    cout<<obj1.lifespan<<endl;
}