#include<iostream>
using namespace std;

int firstOccur(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            //for last occurance start wants to shift left side
            end=mid-1;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccur(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            //for last occurance start wants to shift right side
            start=mid+1;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[9]={1,2,3,3,3,3,3,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int first=firstOccur(arr,n,3);
    int last=lastOccur(arr,n,3);

    cout<<"Total Occurance of "<<3<<" is "<<(last+1)-first<<endl;
}