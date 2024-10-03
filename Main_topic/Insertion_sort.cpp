#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {3, 7, 4, 6, 1, 5};

    insertionSort(arr, 6);
}



// How Insertion Sort Works
// Initial array: {3, 7, 4, 6, 1, 5}

// First iteration (i = 1):

// temp = arr[1] = 7
// Since arr[0] = 3 is less than temp, no shifting is required. Array remains: {3, 7, 4, 6, 1, 5}.
// Second iteration (i = 2):

// temp = arr[2] = 4
// Compare arr[1] = 7 and arr[0] = 3.
// 7 > 4, so shift 7 to arr[2], resulting in {3, 7, 7, 6, 1, 5}.
// Insert 4 at arr[1], resulting in {3, 4, 7, 6, 1, 5}.
// Third iteration (i = 3):

// temp = arr[3] = 6
// Compare arr[2] = 7 and arr[1] = 4.
// 7 > 6, so shift 7 to arr[3], resulting in {3, 4, 7, 7, 1, 5}.
// Insert 6 at arr[2], resulting in {3, 4, 6, 7, 1, 5}.
// Fourth iteration (i = 4):

// temp = arr[4] = 1
// Compare and shift all elements greater than 1 (7, 6, 4, and 3).
// Insert 1 at arr[0], resulting in {1, 3, 4, 6, 7, 5}.
// Fifth iteration (i = 5):

// temp = arr[5] = 5
// Compare arr[4] = 7, arr[3] = 6, and arr[2] = 4.
// Shift 7 and 6, and insert 5 at arr[3], resulting in {1, 3, 4, 5, 6, 7}.
// Final sorted array: {1, 3, 4, 5, 6, 7}