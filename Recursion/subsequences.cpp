#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int index)
{
    // base case
    if (index >= str.size())
    {
        cout<<"{ ";
        for (char nums : output)
        {
            cout << nums << " ";
        }
        cout<<"}\n";
        return;
    }

    // exclude
    solve(str, output, index + 1);

    // include
    output.push_back(str[index]);
    solve(str, output, index + 1);
    
    output.pop_back();
}

int main()
{
    string str = "abc";
    string output;
    int index = 0;

    solve(str, output, index);
}