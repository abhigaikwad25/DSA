#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    //Copy values
    int mainArrIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrIndex++];
    }

    //
    mainArrIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrIndex++];
    }

    //merge 2 sorted array
    int index1=0;
    int index2=0;
    mainArrIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            //first use given value and then increment the mainArrIndex
            arr[mainArrIndex++]=first[index1++];
        }
        else{
            arr[mainArrIndex++]=second[index2++];
        }
    }

    while(index1<len1){
        if(first[index1]<second[index2]){
            //first use given value and then increment the mainArrIndex
            arr[mainArrIndex++]=first[index1++];
        }
        else{
            arr[mainArrIndex++]=second[index2++];
        }
    }

    while(index2<len2){
        if(first[index1]<second[index2]){
            //first use given value and then increment the mainArrIndex
            arr[mainArrIndex++]=first[index1++];
        }
        else{
            arr[mainArrIndex++]=second[index2++];
        }
    }

    //release the memory of temporary array 
    delete []first;
    delete []second;

}

void mergeSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return ;
    }

    //processing
    int mid=s+(e-s)/2;

    //RR
    //perform operation on left side of arr
    mergeSort(arr,s,mid);

    //perform operation on left side of arr
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[7]={38,27,43,3,9,82,10};
    int n=7;
    
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}