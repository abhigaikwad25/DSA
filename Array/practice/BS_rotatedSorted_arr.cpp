#include<iostream>
using namespace std;

int pivoteEle(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int binarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        if(key==arr[mid]){
            return mid;
        }
    }
    return 0;
}

int findPosition(int arr[],int s,int n,int key){
    int pivote=pivoteEle(arr,n);
    if(key>=arr[pivote] && key<=arr[n-1]){
        return binarySearch(arr,pivote,n-1,key);
    }
    else{
        return binarySearch(arr,0,pivote-1,key);
    }
}

int main(){
    int arr[5]={7,9,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Element at index : "<<findPosition(arr,0,n,7 
    );
}