#include<iostream>
using namespace std;

class Hero{
    private:
        int level;
        char name;

    public:
        public:
        int b=17;

    //this default constructor call when obj of class is declare
    Hero(){
        cout<<"Constructtor called"<<endl;
    } 
};

int main(){
    
    cout<<"Hi"<<endl;
    Hero Aashu;
    cout<<"By"<<endl;


    cout<<"Hi"<<endl;
    Hero *obj1=new Hero;
    cout<<"By"<<endl;
}