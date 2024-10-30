#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size==0||size==1){
        return true;
    }

    //RR
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int retans=isSorted(arr+1,size-1);
        return retans;
    }


}

int main(){
    int arr[7]={2,3,4,5,9,7,8};
    int size=7;

    int ans = isSorted(arr,size);

    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

}