
#include<iostream>
using namespace std;


//Divide a problem in two part firstOccur and lastOccur
//if Key matches then ans store the key and for 
//firstOccur end is update by "mid-1" and checking at left part;
//lastOccur start is update by "mid+1" and checking at right part;
int firstOccur(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(key==arr[mid]){
            ans=mid;
            //checking any element is in left
            end=mid-1;
        }
        //going to right
        if(key>arr[mid]){
            start=mid+1;
            
        }
        //going to left
        if(key<arr[mid]){
            end=mid-1;
        }
    }
    return ans;
}

int lastOccur(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(key==arr[mid]){
            ans=mid;
            //checking any element is in right
            start=mid+1;
        }
        //going to right
        if(key>arr[mid]){
            start=mid+1;
            
        }
        //going to left
        if(key<arr[mid]){
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[9]={1,2,3,3,3,3,3,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int first=firstOccur(arr,n,3);
    int last=lastOccur(arr,n,3);

    cout<<"First Occurance at index "<<first<<endl;
    cout<<"Last Occurance at index "<<last;
}
