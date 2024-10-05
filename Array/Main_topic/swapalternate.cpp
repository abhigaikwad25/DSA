#include <iostream>
using namespace std;

void swapalternate(int arr[],int n){
    int start=0;
    int end=1;

    while(end<n && start<n-1){
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};

    swapalternate(arr,5);
    printarr(arr,5);
}