#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=n;i>0;i--){
        ans=ans*i;
    }
    return ans;
}

int nCr(int n,int r){
    int numer=fact(n);
    int deno=fact(r)*fact(n-r);
    int finalans=numer/deno;
    return finalans;
}

int main(){
    int n,r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    int answer=nCr(n,r);
    cout<<"Answer is : "<<answer;
}