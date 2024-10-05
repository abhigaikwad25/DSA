#include<iostream>
using namespace std;

//a and b are formal parameter can take value from actual parameter 
int multi(int a,int b){
    int c=a*b;
    return c;
}
//---just like this
void message();

int main(){
    int num1,num2;
    cout<<"Enter First number : ";
    cin>>num1;
    cout<<"Enter Second number : ";
    cin>>num2;
    //num1 and num2 are the actual parameter
    cout<<"Multiplication is : "<<multi(num1,num2)<<endl;
    message();
    return 0;
}

//cant run if it will written after the main function
//overcome this problem by declaing this above main() part---
void message(){
    cout<<"Hey, Good Morning";
}