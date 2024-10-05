#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
};

int main()
{
    int arr[10] = {10, -2, 5, 25, 6, -4, -1, 25, 32, 1};
    int key;

    cout << "Enter the key = ";
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
}