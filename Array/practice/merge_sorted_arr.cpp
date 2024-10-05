#include<iostream>
#include<vector>
using namespace std;

void merge_arr(int arr1[],int n,int arr2[],int m,int arr[]){
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
            arr[k]=arr1[i];
            i++;
            k++;
    }

    while(j<m){
            arr[k]=arr2[j];
            j++;
            k++;
    }
}

void printarr(int ans[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }cout<<endl;
}

int main(){
    int arr1[6]={1,3,5,6,8,11};
    int arr2[4]={2,4,7,10};

    int arr[10]={0};

    merge_arr(arr1,6,arr2,4,arr);

    printarr(arr,10);
}
