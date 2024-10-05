#include <iostream>
using namespace std;

void reverse_string(char name[], int n)
{
    char result;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = n-i-1; j>i; j--)
        {
            if (i < j)
            {
                swap(name[i], name[j]);
                break;
            }
        }
    }
    cout << "Reverse string is : " << name;
}



int main()
{
    char name[20];

    cout << "Enter your name : ";
    cin >> name;

    int n = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        n++;
    }
    
    reverse_string(name, n);
}