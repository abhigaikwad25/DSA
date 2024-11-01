// This problem give ans in less iteration

#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 0;
    if (b == 1)
        return a;

    // RR
    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a;
    int b;
    cout << "Enter base digit : ";
    cin >> a;
    cout << "Enter power digit : ";
    cin >> b;

    int ans = power(a, b);

    cout << "Answer is : " << ans;
}