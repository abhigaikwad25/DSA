#include<iostream>
using namespace std;

class Human{
    public:
        string name;
        int height=100;

    private:
        int age=5;

    public:
    //getAge is needed when data members are declare in private scope
        int getAge(){
            return this->age;
        }

        int setHeight(int h){
            return height=h;
        }
};

class Men:protected Human{
    // int add=height+age;
    public:
        int getHeight(){
            return this->height;
        }
        
};

// class Akash:public Men{
//     color="Green";
// };

int main(){
    // Human obj1;
    // obj1.setHeight(100);
    // cout<<"Age : "<<obj1.getAge()<<endl;
    // cout<<"Height : "<<obj1.height;



    // Men obj2;
    // obj2.setHeight(100);
    // cout<<"Age : "<<obj2.getAge()<<endl;
    // cout<<"Height : "<<obj2.height<<endl;
    // cout<<"Addition oh age and height : "<<obj2.getAdd()<<endl;




    //access modifier
    Men obj3;
    cout<<obj3.Height();
}