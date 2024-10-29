#include<iostream>
using namespace std;

int fibonacci(int n){
    //Base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans=fibonacci(n-1)+fibonacci(n-2);

    return ans;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        cout<<fibonacci(i)<<" ";
    }
}
