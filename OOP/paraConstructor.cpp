#include<iostream>
using namespace std;

class Hero{
    private:
        char name;

    public:
        int level=10;
        int b=17;
        int add;

    //this [parameterise constructor call when obj of class is declare
    Hero(int level){
        //change the value level 
        //this keyword store the address of current obj
        //this->level pointing to the currnt class level var
        //level reprsents to the current constructor level parameter 
        this->level=level;
    }

    Hero(int b,int level){
        add=b+level;
    }

    void print(){
      cout<<"Level is : "<<level<<endl;
       
    }

    void printAdd(){
        cout<<"Addition of b and level : "<<add<<endl; 
    }
};

int main(){
    
    Hero obj1(100);
    obj1.print();

    Hero obj2(50,150);
    obj2.printAdd();
    
}