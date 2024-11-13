#include<iostream>
using namespace std;

class A {
    public:
    int a;

    void fun1(){
        cout<<"Inside class A"<<endl;
    }
};

class B:public A{
    public:
    
    void fun1(){
        cout<<"Inside class B"<<endl;
    }
};

int main() {
    B obj1;
    obj1.fun1();
    obj1.fun1();
}
