#include<iostream>
using namespace std;

class Hero{
    public:
        char name;
        int level;
        static int timeToComplete;   //initilize it outside the class

    static int random(){
        return timeToComplete;
    }
};      

int Hero::timeToComplete = 50;   //this is syntax

int main(){
    cout<<"using Satic Ketword : "<<Hero::timeToComplete<<endl;

    cout<<"Using Static function : "<<Hero::random()<<endl;
}