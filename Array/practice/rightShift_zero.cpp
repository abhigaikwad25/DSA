#include <iostream>
#include <vector>
using namespace std;

void rightShiftZero(int arr[], int n)
{
    int i = 0; //pointing nonZero value

    for (int j = 0; j < n; j++)
    {
        //arr[j]==0 then it will ignore
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

void printarr(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 0, 3, 2, 0, 0};

    rightShiftZero(arr, 6);
    printarr(arr, 6);
}