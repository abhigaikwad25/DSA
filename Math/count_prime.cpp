//sieve eratosthonis
//IMP
//Time commplexity : O(n*log(logn))

#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    int count=0;
    // prime(n+1, true): This initializes the vector with n+1 elements, all set to true.
    vector<bool> prime(n+1, true);

    prime[0]=prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            count++;

            for(int j=2*i;j<=n;j=j+i){
                prime[j]=0;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number for range to count prime no. : ";
    cin>>n;
    cout<<"Number of prime from 0 to "<<n<<" : "<<countPrime(n);
}




// Example Walkthrough (with n = 10):
// Initialization:

// prime = [false, false, true, true, true, true, true, true, true, true, true] (size 11).
// count = 0.
// Outer Loop (i = 2):

// Since prime[2] == true, 2 is prime.
// Increment count to 1.
// Mark multiples of 2 as non-prime: 4, 6, 8, 10 (set prime[4] = prime[6] = prime[8] = prime[10] = false).
// prime becomes: [false, false, true, true, false, true, false, true, false, true, false].
// Outer Loop (i = 3):

// Since prime[3] == true, 3 is prime.
// Increment count to 2.
// Mark multiples of 3 as non-prime: 6, 9 (set prime[6] = prime[9] = false).
// prime becomes: [false, false, true, true, false, true, false, true, false, false, false].
// Outer Loop (i = 4):

// prime[4] == false, so skip (it's not prime).
// Outer Loop (i = 5):

// prime[5] == true, so 5 is prime.
// Increment count to 3.
// Continue for i = 6 to i = 9: Only 7 is prime.

// Final count = 4.
// The program will return 4 prime numbers in the range [0, 9] (primes are 2, 3, 5, 7).