//sieve eratosthonis


#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        if(b>a){
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Greatest Common Divisor : "<<gcd(a,b);
}



