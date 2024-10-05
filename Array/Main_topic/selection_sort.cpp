#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n-1; i++)
    { 
        int minIdx=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[minIdx] > arr[j])
            {
                // Update the index of the smallest element
                minIdx=j;
            }
        }
        //check minIdx value change or not and swap as per
        if(minIdx!=i){
            swap(arr[i],arr[minIdx]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 3, 2};

    cout<<"Selection Sort array : ";
    selectionSort(arr, 5);
}

//Time Complexity : O(n^2)
//Space  Complexity : O(1)