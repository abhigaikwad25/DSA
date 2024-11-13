#include<iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"Function from A"<<endl;
    }
};

class B{
    public:
    void fun(){
        cout<<"Function from B"<<endl;
    }
};

class C:public A,public B{

};

int main(){
    C obj1;
    obj1.A::fun();
    obj1.B::fun();
}