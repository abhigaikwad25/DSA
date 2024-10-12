#include <iostream>
using namespace std;

bool searchElement(int arr[3][3], int target)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (target == arr[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    if(searchElement(arr, 11)){
        cout<<"Element Find";
    }
    else{
        cout<<"Element not Find";
    }
}