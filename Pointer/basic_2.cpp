#include<iostream>
using namespace std;

int main(){
    // int *ptr;   //gives the garbage value

    int num=5;
    
    //Initialization method 2
    int *ptr=&num;

    cout<<"Value of num : "<<num<<endl;    
    cout<<"Value of *ptr num: "<<*ptr<<endl;    //giving num value store in ptr
    cout<<"Value of ptr of num: "<<ptr<<endl;     //giving the heexadecimal address value 

    //Initialization method 2
    int *ptr2=0;   //If cant assign value null then give segmentation error
    ptr2=&num;
    cout<<"Value of num : "<<num<<endl;    
    cout<<"Value of *ptr num: "<<*ptr2<<endl;    //giving num value store in ptr
    cout<<"Value of ptr of num: "<<ptr2<<endl;  

    //copy pointer
    int i=100;
    int *ptr3=&i;
    int *ptr4=ptr3;
    //Values
    cout<<"Ptr3 : "<<*ptr3<<endl;
    cout<<"Ptr4 : "<<*ptr4<<endl;
    cout<<"Ptr3 : "<<ptr3<<endl;
    cout<<"Ptr4 : "<<ptr4<<endl;

    //Feature of Pointer
    int a=10;
    int b=a;  //value of a copy in  b
    cout<<"value of a before update : "<<a<<endl;
    cout<<"value of a before update : "<<b<<endl;
    b++;
    cout<<"value of a after update : "<<a<<endl;
    cout<<"value of a after update : "<<b<<endl;

    //overcome this problem using pointer
    int m=10;
    int *n=&m;  //value of a copy in  b
    cout<<"value of a before update : "<<m<<endl;
    cout<<"value of a before update : "<<*n<<endl;
    // (*n)++;  //11 value inereacs by 1
    // *n++;   //100  : This will make changes in memory location and increased the address by 4 and that increased location have value 100
    // n=n+1;   //100 : This will make changes in memory location and increased the address by 4 and that increased location have value 100
    *n=*n+1;   //11 value inereacs by 1
    cout<<"value of a after update : "<<m<<endl;
    cout<<"value of a after update : "<<*n<<endl;



}