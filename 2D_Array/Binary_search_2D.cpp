#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> &matrix,int target)
{
    int row = matrix.size();
    int col = matrix[0].size();


    int start = 0;
    int end = row * col -1;

    while (start <= end)
    {
        int mid=start+(end-start)/2;
        int element =matrix[mid/col][mid%col];r6u7tyf

        if(element==target){
            return 1;
        }
        if(element < mid){
            end=mid-1;
        }
        if(element > mid){
            start=mid+1;
        }
    }
    return 0;
        
}

int main()
{
    vector<vector<int>> matrix(3, vector<int>(4));

    cout << "Enter the elements of Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    cout << "Input Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    if(binarySearch(matrix,61)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    
}

//Time complexity : O(log(row*col))

