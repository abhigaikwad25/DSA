#include <iostream>
using namespace std;

void reverse(string& str, int i, int j)
{
    cout<<"call received for : "<<str<<endl;

    // base case
    if (i > j)
        return ;

    // Processing
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive relation
    reverse(str, i, j);

}

int main()
{
    string str = "abcdefg";
    int i = 0;
    int j = str.length()-1;
    reverse(str, i, j);

    cout<<str<<endl;

}