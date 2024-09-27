#include <iostream>
using namespace std;

void swapalter(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    //sizeof give the length in byte 4 for each index 4*5=20 and one index is of 4
    //20/4=5 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapalter(arr, n);
    cout<<"Altered array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}