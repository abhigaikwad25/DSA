#include<iostream>
using namespace std;

//stack memory is a static memory allocation type
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];

    //it is not a good practice because in stack memory required the size at complie time 
    //in this code memory can be allocated at the runtime 
    //if size is greater than the giveen stack memory it gives error

    //overcome this problem 

    int arr[10000];
    //store element here 
}