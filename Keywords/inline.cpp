#include <iostream>
using namespace std;

inline int getmax(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 3;
    int b = 5;
    int ans = 0;

    //replace the function call with function code
    ans = getmax(a, b);
    cout << ans << endl;

    a=a+3;
    b=b+1;
    ans = getmax(a, b);
    cout << ans << endl;
}