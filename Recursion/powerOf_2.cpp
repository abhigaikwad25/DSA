#include<iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0)
        return 1;

    //recursive relation
    int smallerproblem=power(n-1);
    int bigproblem=2*smallerproblem;

    return bigproblem;
    // return 2*power(n-1);
}

int main(){
    int n;

    cin>>n;

    int ans=power(n);
    cout<<ans<<endl;
}