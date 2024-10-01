#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // this for loop is for round
    for (int i = 1; i < n; i++)
    //run for 1 to n-1 times
    {
        bool swaped=false;
        // this for loop is for sorthing element
        //it will run 
        // frist iteration from 0 to n-1
        // second iteration from 0 to n-2
        // third iteration from 0 to n-3
        // fourth iteration from 0 to n-4 
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped =true;
            }
        }
        //for array is already swaped
        if(swaped=false){
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 3, 2};
    cout << "Sorted array : ";
    bubbleSort(arr, 5);
}