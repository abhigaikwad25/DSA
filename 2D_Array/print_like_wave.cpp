#include <iostream>
using namespace std;

void printLikeWave(int arr[3][3])
{

    for (int j = 0; j < 4; j++)
    {
        if (j & 1 || j==0)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i][j] <<" ";
            }
        }
        else
        {
            //i starting from 2 because no of row are 3 indeex start from 0
            for (int i = 2; i >=0; i--)
            {
                cout << arr[i][j] <<" ";
            }
        }
    }
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printLikeWave(arr);
}