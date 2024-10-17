#include<iostream>
using namespace std;

void update(int *p){
    //for checking address changes or not
    p=p+1;
    // cout<<p<<endl;

    //checking the *p value chane=ge using the functon
    // *p=*p+1;
}

void print(int *p){
    cout<<*p<<endl;
}





// void getsum(int arr[],int n){
//     cout<<"Size of array : "<<sizeof(arr)<<endl;

//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<"Sum is : "<<sum<<endl;

// }

//also pass like this arraay as a pointer
void getsum(int *arr,int n){
    cout<<"Size of array ptr : "<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum is : "<<sum<<endl;
}





int main(){
    // int num=100;
    // int *p=&num;
    // print(p);

    //Updated value in function
    // cout<<"Before : ";
    // cout<<p<<endl;
    // cout<<"After : ";
    // update(p);


    // //Check updated value reflect on main function
    // cout<<"Before : "<<p<<endl;
    // update(p);
    // cout<<"After : "<<p<<endl;






    //pass array in function
    int arr[6]={1,2,3,4,5,6};

    getsum(arr+3,3);  //pass starting location is from 3 
}