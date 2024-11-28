//This implementation using STL
#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creating a stack
    stack<int> s;

    //push operation
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //pop operation
    s.pop();        //Pop the last inserted element 


    //give top element of stack
    cout<<s.top()<<endl;

    //if stack empty give 1 otherwise give 0        
    cout<<s.empty()<<endl;      
}