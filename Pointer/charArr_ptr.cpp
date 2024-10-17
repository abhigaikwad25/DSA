#include<iostream>
using namespace std;


//In Case of Char array cout work fully diffent as compare to int arr
int main(){

    char ch[6]="abcde";

    cout<<ch<<endl; //give full char array element 
    char *ptr=&ch[0];
    cout<<"ptr : "<<ptr<<endl;

}