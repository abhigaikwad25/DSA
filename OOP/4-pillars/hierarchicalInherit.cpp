#include<iostream>
using namespace std;

class A{
    public:
    string name;
    int lifespan;

    public:
    void funA(){
        cout<<"Function A - Parent class"<<endl;
    }
};

class B:public A{
    public:
    string color;

    void funB(){
        cout<<"Function B - Inherit A"<<endl;
    }
};

class C:public A{
    public:
    int varA;

    void funC(){
        cout<<"Function C - Inherit A"<<endl;
    }
};

int main(){
    A obj1;
    obj1.funA();

    B obj2;
    obj2.funA();
    obj2.funB();

    C obj3;
    obj3.funA();
    // obj3.funB();  //Cant inhertit in class c 
    obj3.funC();
}