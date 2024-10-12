#include <iostream>
using namespace std;

void rowAddition(int arr[3][3])
{
    cout<<"Row wise Addition is : "<<endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout<<endl;
}

void colAddition(int arr[3][3])
{
    cout<<"Coloumn wise Addition is : "<<endl;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout<<endl;
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
    rowAddition(arr);
    colAddition(arr);
}