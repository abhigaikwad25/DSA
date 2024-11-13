#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Abhijit fun1"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello Abhijit fun2 "<<endl;
    }

    void sayHello(string name,int age){
        cout<<"Hello Abhijit fun3"<<endl;
    }
};

int main(){
   A obj1;
   obj1.sayHello();
   obj1.sayHello("Abhijit");
   obj1.sayHello("Abhijit",49);  
}