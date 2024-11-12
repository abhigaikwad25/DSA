#include<iostream>
using namespace std;

class Hero{
    private:
        string name;
        int age;
        int height;

    public:
    int getAge(){
        return this->age;
    } 
};

int main(){
    Hero obj1;
    obj1.getAge();
    cout<<"Code sahi chal raha hai";
}