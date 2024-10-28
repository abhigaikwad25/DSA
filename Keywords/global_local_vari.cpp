#include<iostream>
using namespace std;

int a(int& x){
    int var_a=10;
    return var_a*x;
}

// int b(){
//     int var_b=100;
// }

int main(){
    int x=5;
    
    cout<<a(x)<<endl;
    // cout<<var_a<<endl;   //gives error because it is local to function a only

    {
        int i=100;
        cout<<i<<endl;  //Also i value cant access outside this scopen
    }

    // cout<<i<<endl;
}