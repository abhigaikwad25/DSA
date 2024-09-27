#include <iostream>
using namespace std;

bool findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    // only for odd length
    int arr[7] = {3, 5, 7, 5, 1, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique Element is : " << findUnique(arr, n);
}

// x ^ x = 0: Any number XORed with itself results in 0.
// x ^ 0 = x: Any number XORed with 0 remains the same
// x ^ y = z checks their binary number

//  011   (3 in binary)
//  ^101   (5 in binary)
//  -----
//  110   (Result in binary, which is 6 in decimal)