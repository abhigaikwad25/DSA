#include<iostream>
using namespace std;
// #include "importThis.cpp"  //include this file in current file 
//in that file function is written and we are accesing this in current file 


class Addition{
    private:
        int a=13;
        int b=17;
    public:
        int c=a+b;
        int addFun(){
            return c;
        }
    
    int getVarA(){
        return a;
    }

    int setVarA(int varA){
        a=varA;
    }
};

int main(){
    Addition add;
    cout<<"Addition of a and b : "<<add.addFun()<<endl;
    cout<<"Size : "<<sizeof(add)<<endl;

    //Try to access a outside class normaly
    // cout<<"Access a using normaly : "<<add.a<<endl;
    
    //access PRIVATE MEMEBER a outside class using getter
    cout<<"Access a using getter : "<<add.getVarA()<<endl;

    //set value to a (private member) from outside the class 
    add.setVarA(50);
    cout<<"Access a using getter after setter operation : "<<add.getVarA()<<endl;

    return 0;
}