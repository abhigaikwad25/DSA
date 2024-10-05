#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>


//This is normal approach
// void rev_arr(int arr[], int n)
// {
//     int j;
//     for (int i = 0; i < n; i++)
//     {
//         j=n-i-1;
//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//         if (i == j)
//         {
//             break;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }cout<<endl;
// }

// int main(){
//     int odd_arr[5]={1,2,3,4,5};
//     int even_arr[6]={1,2,3,4,5,6};

//     rev_arr(odd_arr,5);
//     rev_arr(even_arr,6);
// }



//Using STL

vector<int> reverse_arr(vector<int> vec){
    int n=vec.size();
    int i=0;
    int j=n-1;

    while(i<j){
        swap(vec[i],vec[j]);
        i++;
        j--;
    }
    return vec;
}

void printarr(vector<int> ans){
    int n=ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }cout<<endl;

}



int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<int> ans=reverse_arr(v);

    printarr(ans);
}
