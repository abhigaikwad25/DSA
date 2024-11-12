#include<iostream>
using namespace std;

class Hero{
    public:
        char name;
        int level;

    Hero(){
        // cout<<"Simple constructor"<<endl;
        name='A';
        level=18;
    }
    //copy constructor - after writing copy constructor default copy constructor is deleted 
    Hero(Hero& temp){
        cout<<"copy constructor"<<endl;
        this->name='B';
        this->level=temp.level;
    }

    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Level : "<<level<<endl;
    }

    // Hero(Hero obj1){
        
    // }
};

int main(){
    Hero obj1;
    obj1.print();

    Hero obj2(obj1);
    obj2.print();


    // Copy Assignment Operator
    cout<<"After Copy Assignment Operator\n";
    obj1=obj2;
    obj1.print();

    obj2.print();
}