#include<iostream>
using namespace std;

int findDuplicate(int arr[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    // ans = 0 ^ 1 ^ 2 ^ 3 ^ 4 ^ 2 ^ 5
    // = 1 ^ 2 ^ 3 ^ 4 ^ 2 ^ 5
    // 1 ^ 2 = 3
    // 3 ^ 3 = 0
    // 0 ^ 4 = 4
    // 4 ^ 2 = 6
    // 6 ^ 5 = 3


    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    // 3 ^ 1 = 2
    // 2 ^ 2 = 0
    // 0 ^ 3 = 3
    // 3 ^ 4 = 7
    // 7 ^ 5 = 2
    
    return ans;
}

int main(){
    int arr[5]={1,2,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findDuplicate(arr,n);
}