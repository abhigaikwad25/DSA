#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& arr, vector<int>& output, int index)
{
    // base case
    if (index >= arr.size())
    {
        cout<<"{ ";
        for (int nums : output)
        {
            cout << nums << " ";
        }
        cout<<"}\n";
        return;
    }

    // exclude
    solve(arr, output, index + 1);

    // include
    output.push_back(arr[index]);
    solve(arr, output, index + 1);
    
    output.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> output;
    int index = 0;

    solve(arr, output, index);
}