#include<iostream>
using namespace std;

int peakindex(int arr[],int n){
    int start=0;
    int end=n-1;
    
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[start]<arr[start+1]){
            start=start+1;
        }
        else{
            end=mid;
        }
        
    }
    return end;
}

int main(){

    int arr[11]={1,2,3,4,5,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Peak index is : "<<peakindex(arr,n);
}