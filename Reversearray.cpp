#include <iostream>
using namespace std;

// void reversearray(int arr[],int size){
//     int revarr[10];
//     for(int i=0;i<size;i++){
//         revarr[i]=arr[size-1-i];
//     }
//     for(int j=0;j<size;j++){
//         cout<<revarr[j]<<"\t";
//     }
// }

// int main(){
//     int arr[10]={10, -2, 5, 25, 6, -4, -1, 25, 32, 1};
    
//     reversearray(arr,10);
//     return 0;
// }

void revarr(int arr1[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr1[start],arr1[end]);
        start++;
        end--;
    }
}

void printarr(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}

int main(){
    int arr1[5]={1,2,3,4,5};

    revarr(arr1,5);
    printarr(arr1,5);
}