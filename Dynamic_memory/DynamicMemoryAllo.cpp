#include<iostream>
using namespace std;

//HEAP memory is a Dynamic memory allocation type
int main(){
    char ch='a';
    char *c=&ch;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(c)<<endl;

    //this is HEAP type of memory use for big array/data store at runtime time
    //combination of pointer and address of for char is 9 byte (8 for pointer and 1 for char)
    //combination of pointer and address of for int  is 12 byte(8 for pointer and 4 for int)


    // define arr using heap memory
    
}