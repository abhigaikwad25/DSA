#include<iostream>
using namespace std;

class A {
    public:
    int a;

public:
    // Defining the unary operator+ function
    void operator+(A &obj) {
        int value1=this->a;
        int value2=obj.a;
        cout<<"Output : "<<value2-value1<<endl;
        // cout << "Hello Abhijit" << endl;
    }

    void operator() (){
        cout<<"I use () this operator "<<this->a<<endl;
    }
};

int main() {
    A obj1,obj2;
    // obj1.operator+(); // Using the unary plus operator
    obj1.a=10;
    obj2.a=15;

    obj1+obj2;


    obj1() ;
}
