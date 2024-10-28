#include<iostream>
using namespace std;


//This is Tail Recursion
// void print(int n){
//     //base case        
//     if(n==0){
//         return ;
//     }

//     cout<<n<<" ";

//     //recursive relation
//     print(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     print(n);
// }


//This is Head recursion
void print(int n){
    //base case
    if(n==0){
        return ;
    }

    //recursive relation
    print(n-1);

    //processing
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    print(n);
}