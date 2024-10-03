#include<iostream>
using namespace std;

//header file for stl array
#include<array>

int main(){
    array<int,4> arr={1,2,3,4};

    //check the size of array;
    cout<<"Size of array is : "<<arr.size()<<endl;

    //check the element at specific location
    cout<<"element at index 2 : "<<arr.at(2)<<endl;

    //check aray is empty or not (give s in Boolean)
    cout<<"element at index 2 : "<<arr.empty()<<endl;

    //gives first element 
    cout<<"element at index 2 : "<<arr.front()<<endl;
    
    //gives last element 
    cout<<"element at index 2 : "<<arr.back()<<endl;
}
