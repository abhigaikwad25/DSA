#include<iostream>
#include <vector>
using namespace std;

vector<int> intersection(int arr1[],int arr2[],int arr1_size,int arr2_size){
    
    vector<int> ans;
    for(int i=0;i<arr1_size;i++){
        int ele=arr1[i];
        for(int j=0;j<arr2_size;j++){
            if(ele==arr2[j]){
                ans.push_back(ele);
                
            }
        }
    }
    
    return ans;
}

int main(){
    int arr1[4]={1,2,3,4};
    int arr2[4]={3,4,5,6};
    
    int arr1_size=sizeof(arr1)/sizeof(arr1[0]);
    int arr2_size=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> result=intersection(arr1,arr2,arr1_size,arr2_size); 
    for(int element : result){
        cout<<element<<" ";
    }
}