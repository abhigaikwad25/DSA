#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &stk,int element){
    if(stk.empty()){
        stk.push(element);
        return;
    }

    int num=stk.top();
    stk.pop();

    insertAtBottom(stk,element);

    stk.push(num);
}

void reverseStack(stack<int> &stk){
    //base case
    if(stk.empty()){
        return ;
    }

    int num=stk.top();
    stk.pop();

    reverseStack(stk);

    insertAtBottom(stk,num);
}

int main(){
    stack<int> stk;
    int key=50;
    
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    reverseStack(stk);

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
}