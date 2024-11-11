#include <iostream>
#include <vector>
using namespace std;

void permutationInSring(vector<vector<int>> &ans, vector<int> nums, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        permutationInSring(ans, nums, index+1);
        // Backtrack - this will make changes in main nums 
        //if there is three nums a b c and sap between a and b we need to backtrack to original nums
        swap(nums[index], nums[j]);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    int index = 0;

    permutationInSring(ans, nums, index);

    for (const auto &combination : ans){
        for (int nums : combination)
        {
            {
                cout << nums << " ";
            }
        }
        cout<<endl;
    }
}