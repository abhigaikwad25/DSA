#include<iostream>
using namespace std;

int arrayAdd(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }

    //RR
    // int finalAns = arr[0]+arrayAdd(arr+1,size-1);

    //Anoter RR
    int finalAns= arr[size - 1] + arrayAdd(arr, size - 1);
    // Evaluting backup the chain of call 
    // arrayAdd({}, 0) returns 0
    // arrayAdd({2}, 1) returns 2 + 0 = 2
    // arrayAdd({2, 3}, 2) returns 3 + 2 = 5
    // arrayAdd({2, 3, 4}, 3) returns 4 + 5 = 9
    // arrayAdd({2, 3, 4, 5}, 4) returns 5 + 9 = 14
    // arrayAdd({2, 3, 4, 5, 6}, 5) returns 6 + 14 = 20

    //Another RR - By love babbar
    //base case extra
    // if(size==1){
    //     return 1;
    // }

    // int remainingPart = getSum(arr+1, size-1);
    // int sum = arr[0] + remainingPart;
    // return sum;

    return finalAns;
}

int main(){
    int arr[5]={2,3,4,5,6};
    int size=5;

    int ans = arrayAdd(arr,size);

    cout<<"Addition of array element : "<<ans<<endl;

    

}