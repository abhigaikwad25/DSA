#include<iostream>
using namespace std;

class Hero{
    public:

    Hero(){
        cout<<"Constructor called"<<endl;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

};

int main(){
    //For that destructor called automaticallly
    Hero obj1;

    //for that destructor call mannualy
    Hero *obj2=new Hero;
    delete obj2;

}