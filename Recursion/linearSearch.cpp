#include<iostream>
using namespace std;

void printFun(int arr[],int size){
    cout<<"Size of array is : "<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int arr[],int size,int key){
    printFun(arr,size);

    //base case
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    else{
        int remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
    
}

int main(){
    int arr[6]={2,3,4,5,6,7};
    
    if(linearSearch(arr,6,9)){
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key not Found"<<endl;
    }
}