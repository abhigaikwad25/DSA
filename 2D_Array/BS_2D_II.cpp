#include <iostream>
#include <vector>
using namespace std;

//Leetcode Problem No.240 Search in 2D matrix
//array is sorted in row and col wise both

bool binarySearch(vector<vector<int>> &matrix,int target)
{
    int row = matrix.size();
    int col = matrix[0].size();


    int rowIndex = 0;
    int colIndex = col -1;

    while (rowIndex<row && colIndex>=0)
    {
        int element =matrix[rowIndex][colIndex];

        if(element==target){
            return 1;
        }
        if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
        
}

int main()
{
    vector<vector<int>> matrix(3, vector<int>(3));

    cout << "Enter the elements of Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    cout << "Input Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    if(binarySearch(matrix,6)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}

//Time complexity : O(log(row*col))

