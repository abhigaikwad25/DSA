#include<iostream>
using namespace std;

int squareRoot(int num){
    int start=0;
    int end=num;
    long long  ans=-1;
    while(start<=end){
        long long int mid=start+(end-start)/2;
        //if use only int then it will go outside the range of 2^31
        long long int square=mid*mid;
        if(square==num){
            return mid;
        }
        if(square>num){
            end=mid-1;
        }
        if(square<num){
            start=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number inside Square Root : ";
    cin>>num;
    cout<<"Square Root of "<<num<<" is "<<squareRoot(num);
}