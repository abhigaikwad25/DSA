#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;

    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
}




// Example: Calculating factorial(4)
// Let’s see the step-by-step recursion when n = 4:

// factorial(4) calls 4 * factorial(3)
// factorial(3) calls 3 * factorial(2)
// factorial(2) calls 2 * factorial(1)
// factorial(1) calls 1 * factorial(0)
// factorial(0) returns 1 (base case)

// Now we substitute back up the chain of calls:
// factorial(1) = 1 * 1 = 1
// factorial(2) = 2 * 1 = 2
// factorial(3) = 3 * 2 = 6
// factorial(4) = 4 * 6 = 24