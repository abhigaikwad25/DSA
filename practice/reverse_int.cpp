#include<iostream>
using namespace std;

int reverseint(int num){
    int rev=0;
    if(num>INT_MIN || num<INT_MAX){
        return 0;
    }
    while(num!=0){
        int ans=num%10;
        rev=(rev*10)+ans;
        num=num/10;
    }
    return rev;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<reverseint(num); 
}