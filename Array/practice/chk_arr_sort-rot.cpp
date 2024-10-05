#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


//Check in arr how many pair that have not satisfy the condition of sorted array
//Eg, arr[i]>arr[i-1] count++; and check arr[n-1]>arr[0]
//if count==1 cout True
//else False
bool checkArrSortRotated(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    return count==1; //gives true if count == 1 oterwise false
}

int main(){
    // int arr[5]={1,2,3,4,5};  //True
    // int arr[5]={3,4,2,5,1};  //True
    // int arr[5]={1,1,1,1,1};  //True
    int arr[5]={5,1,4,2,3};  //False

    if(checkArrSortRotated(arr,5)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}