#include<iostream>
using namespace std;

int main(){
    int num=5;
    
    int *ptr=&num;

    cout<<"Value of num : "<<num<<endl;    
    cout<<"Value of num by ptr: "<<*ptr<<endl;    //giving num value store in ptr
    cout<<"Value of num by ptr: "<<ptr<<endl;    //giving the heexadecimal address value 

    num=num+5;
    cout<<"Value of increased num : "<<num<<endl;    
    cout<<"Value of num by ptr : "<<*ptr<<endl;


    cout<<endl;

    double d=4.55555;
    double *ptr2=&d;
    cout<<"Value of d : "<<d<<endl;
    cout<<"Value of d by ptr: "<<*ptr2<<endl;


    cout<<endl;
    //checking size
    cout<<"Size of num : "<<sizeof(num)<<endl;
    cout<<"Size of *ptr : "<<sizeof(*ptr)<<endl;
    cout<<"Size of int ptr : "<<sizeof(*ptr)<<endl;
    cout<<"Size of double ptr : "<<sizeof(ptr2)<<endl;
}