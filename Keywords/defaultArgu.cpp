#include<iostream>
using namespace std;

void printArr(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<i<<endl;
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    printArr(arr,6);  //use default argument
    cout<<endl;
    printArr(arr,6,2);  //use pass argument 
}