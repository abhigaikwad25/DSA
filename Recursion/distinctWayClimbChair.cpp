#include<iostream>
using namespace std;

//This code is of recursion 
//Counting the distinct way count to climb the chair he take move for one and two chair 
//Recusive relation f(n)=f(n-1)+f(n-2)
//Base case n<0 then 0
//Base case n==0 then 1   
int distinctWayClimbChair(int n){
    //Base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //RR
    int ans=distinctWayClimbChair(n-1)+distinctWayClimbChair(n-2);

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<distinctWayClimbChair(n);
}
