#include <iostream>
#include <vector>
using namespace std;

vector<int> printLikeWave(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int startingRow = 0;
    int startingcol = 0;
    int endingcol = col - 1;
    int endingRow = row - 1;

    int count = 0;
    int total = row * col;

    while (count < total)
    {
        //addding starting row element in vector and starting row incremnet
        for (int index = startingcol; index <= endingcol && count < total; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //addding ending col element in vector and ending col decrement
        for (int index = startingRow; index <= endingRow && count < total; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;

        //addding ending row element in vector and ending row decrement
        for (int index = endingcol; index >= startingcol && count < total; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //addding starting col element in vector and starting col incremnet
        for (int index = endingRow; index >= startingRow && count < total; index--)
        {
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
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

    vector<int> wave = printLikeWave(matrix);

    cout << "Spiral Matrix : " << endl;
    for (int i : wave)
    {
        cout << i << " ";
    }
    cout << endl;
}

