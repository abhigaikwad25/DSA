#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter Number of row : ";
    cin >> row;

    cout<<"Enter Number of col : ";
    cin >> col;

    //creating a one col that can store the address of each row starting address
    int **arr = new int *[row];

    //creating 2D array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }


    //taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<endl;
    //printing output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //released memory
    //frist release the heap memory row wise 
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }

    //relesed fristly created col  
    delete []arr ;
    cout<<"Memory Released ";

}