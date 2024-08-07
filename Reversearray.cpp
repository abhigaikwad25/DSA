#include <iostream>
using namespace std;

void reversearray(int arr[],int size){
    int revarr[10];
    for(int i=0;i<size;i++){
        revarr[i]=arr[size-1-i];
    }
    for(int j=0;j<size;j++){
        cout<<revarr[j]<<"\t";
    }
}

int main(){
    int arr[10]={10, -2, 5, 25, 6, -4, -1, 25, 32, 1};
    
    reversearray(arr,10);
    return 0;
}