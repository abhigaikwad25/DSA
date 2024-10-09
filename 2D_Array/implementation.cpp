#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];

    //directly initialize the value
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //Taking input row wise
    // for (int row = 0; row < 3; row++) //this loop is for row
    // {
    //     for (int col = 0; col < 4; col++)  //this loop is for col
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    //Taking input col wise
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }

    //Printing 2D array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col]<<" ";
        }
        cout<<endl;
    }

}