#include <iostream>
#include <vector>
using namespace std;

void letterCombination(vector<string> &ans, string output, string digits, int index, string mapping[])
{
    // base case
    if (index >= digits.size())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        letterCombination(ans, output, digits, index + 1, mapping);
        output.pop_back();
    }

    output.pop_back();
}

int main()
{
    string digits = "23";
    vector<string> ans;
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;

    letterCombination(ans, output, digits, index, mapping);

    for (string combination : ans)
    {
        cout << combination << " ";
    }
    cout << endl;
}