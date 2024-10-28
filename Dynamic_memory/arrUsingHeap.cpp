#include <iostream>
using namespace std;

// int sum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

void releasedMemory(int *arr1){
    delete[] arr1;
}

int main()
{
    // int *arr=new int[5];

    // cout<<"size of arr : "<<sizeof(arr)<<endl;
    // cout<<"size of int[5] : "<<sizeof(int[5])<<endl;
    // cout<<"size of overall statment : "<<sizeof(arr)+sizeof(int[5])<<endl;



    //DYNAMIC Memory allocation
    // int n;
    // cin >> n;
    // int *arr = new int[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int ans = sum(arr, n);
    // cout << "Sum is : " << ans;



    //mannualy relsed memory in heap
    int *arr1=new int[50];
    cout<<"Before release memory : "<<sizeof(arr1)<<endl;
    releasedMemory(arr1);
    cout<<"Memory released"<<endl;
    
}