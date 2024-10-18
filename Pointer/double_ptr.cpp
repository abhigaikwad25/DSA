#include <iostream>
using namespace std;

void update(int **ptr2)
{
    // ptr2=ptr2+1;
    // Cant change anything

    // *ptr2 = *ptr2 + 1; //*ptr2=710
    // make chane the value denoted by address store in ptr1
    // i value Before : 100
    // ptr1 value Before : 0xf7cf9ff8d4
    // ptr2 value Before : 0xf7cf9ff8c8
    // i value after : 100
    // ptr1 value after : 0xf7cf9ff8d8   changed
    // ptr2 value after : 0xf7cf9ff8c8

    **ptr2 = **ptr2 + 1;
    // i value Before : 100
    // ptr1 value Before : 0xf9907ffdf4
    // ptr2 value Before : 0xf9907ffde8
    // i value after : 101               changed
    // ptr1 value after : 0xf9907ffdf4
    // ptr2 value after : 0xf9907ffde8
}

int main()
{
    // int i=100;
    // int *ptr1=&i;
    // int **ptr2=&ptr1;
    // int ***ptr3=&ptr2;    //pointer of ptr2

    // cout<<"Address of i : "<<&i<<endl;
    // cout<<"Address of ptr1 : "<<ptr1<<endl;
    // cout<<"Address of ptr2 : "<<ptr2<<endl;
    // cout<<endl;

    // cout<<"Value of ptr1 : "<<*ptr1<<endl;
    // cout<<"Value of ptr2 : "<<*ptr2<<endl;
    // cout<<endl;

    // cout<<"accessing value of i from ptr2 : "<<**ptr2<<endl;
    // cout<<"accessing value of i from ptr1 : "<<*ptr1<<endl;
    // cout<<endl;

    // cout<<"writing address of i or value at ptr1"<<endl;
    // cout<<&i<<endl;
    // cout<<ptr1<<endl;
    // cout<<*ptr2<<endl;

    int i = 100;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    cout << "i value Before : " << i << endl;
    cout << "ptr1 value Before : " << ptr1 << endl;
    cout << "ptr2 value Before : " << ptr2 << endl;
    update(ptr2);   //giving input as 930
    cout << "i value after : " << i << endl;
    cout << "ptr1 value after : " << ptr1 << endl;
    cout << "ptr2 value after : " << ptr2 << endl;
}
