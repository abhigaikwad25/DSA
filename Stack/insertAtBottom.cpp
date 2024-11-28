#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &stk,int key){
    //base case
    if(stk.empty()){
        stk.push(key);
        return ;
    }

    //processing
    int num=stk.top();
    stk.pop();

    //RR
    insertAtBottom(stk,key);

    stk.push(num);
}

int main(){
    stack<int> stk;
    int key=50;
    
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    insertAtBottom(stk,key);

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
}