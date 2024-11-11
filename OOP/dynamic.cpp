#include<iostream>
using namespace std;
// #include "importThis.cpp"  //include this file in current file 
//in that file function is written and we are accesing this in current file 


class Addition{
    private:
        int a=13;
    public:
        int b=17;
        int c=a+b;
        int addFun(){
            return c;
        }
    
    int getVarA(){
        return a;
    }

    void setVarA(int varA){
        a=varA;
    }
};

int main(){
    //Static Allocation
    Addition add;
    cout<<"Size : "<<sizeof(add)<<endl;

    //Dynamic Allocation
    Addition *sum=new Addition();
    cout<<"Value of A : "<<(*sum).getVarA()<<endl;
    cout<<"Value of B : "<<(*sum).b<<endl;


    return 0;
}