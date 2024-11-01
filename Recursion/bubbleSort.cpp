#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return ;
    }

    // 1 case solve kar diya - largest element ko last may rakh diya
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // RR
    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[6] = {5, 1, 3, 7, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}