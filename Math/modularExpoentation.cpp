// Modular Expomentation  
//find (base^power)%mod   
//appication is use in cryptography that have a very large number

#include <iostream>
#include <vector>
using namespace std;

int gcd(int base, int power, int mod)
{
    int res = 1;
    base = base % mod;
    while (power > 0)
    {
        if (power & 1)
        {
            res = (1LL * res * base) % mod;
        }
        base = (1LL * base * base) % mod;
        power = power >> 1; // right shift
    }
    return res;
}

int main()
{
    int base, power, mod;

    cout << "Answer is : " << gcd(2, 3, 3);
}
