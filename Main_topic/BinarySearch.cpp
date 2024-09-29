// My code
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[],int n,int key){
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         int mid=(i+j)/2;
//         if(key>arr[mid]){
//             i=mid+1;
//         }
//         if(key<arr[mid]){
//             j=mid-1;
//         }
//         if(key==arr[mid]){
//             return mid;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[5]={2,3,5,7,9};
//     int key;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Enter key : ";
//     cin>>key;
//     int result=binarySearch(arr,n,key);
//     if(result==0){
//         cout<<"Key not found";
//     }
//     else{
//         cout<<key<<" is found at index "<<result;
//     }
// }






//for 2^31

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
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

int main(){
    int arr[5]={2,3,5,7,9};
    int key;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter key : ";
    cin>>key;
    int result=binarySearch(arr,n,key);
    if(result==0){
        cout<<"Key not found";
    }
    else{
        cout<<key<<" is found at index "<<result;
    }
}


