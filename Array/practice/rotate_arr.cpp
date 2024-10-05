#include <iostream>
using namespace std;
#include <vector>

void rotateArr(int arr[],int key,int n){
    vector<int> temp(n);
    int newpos;
    for(int i=0;i<n;i++){
        newpos=(i+key)%n;
        temp[newpos]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }cout<<endl;
}

// void printarr(int ans,int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }cout<<endl;

// }

int main(){
    int arr[4]={1,2,3,4};
    int key=2;

    rotateArr(arr,key,4);
    // printarr(arr,6)
}



// Let’s go through the elements one by one:

// Element 1 (arr[0]):

// Current index: 0
// New index after rotation: (0 + 2) % 6 = 2
// So, place 1 in temp[2]
// Element 2 (arr[1]):

// Current index: 1
// New index after rotation: (1 + 2) % 6 = 3
// So, place 2 in temp[3]
// Element 3 (arr[2]):

// Current index: 2
// New index after rotation: (2 + 2) % 6 = 4
// So, place 3 in temp[4]
// Element 4 (arr[3]):

// Current index: 3
// New index after rotation: (3 + 2) % 6 = 5
// So, place 4 in temp[5]
// Element 5 (arr[4]):

// Current index: 4
// New index after rotation: (4 + 2) % 6 = 0 (wraps around)
// So, place 5 in temp[0]
// Element 6 (arr[5]):

// Current index: 5
// New index after rotation: (5 + 2) % 6 = 1
// So, place 6 in temp[1]