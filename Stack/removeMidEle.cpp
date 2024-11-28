#include<iostream>
#include<stack>
using namespace std;

void removeMid(stack<int> &s,int count,int n){
    if(count==n/2){
        s.pop();
        return;
    }

    //IMP step 
    //num value stroe in each recursive call and return from callStack
    int num=s.top();
    s.pop();

    removeMid(s,count+1,n);

    s.push(num);
}

int main(){
    
    stack<int> s;
    int count=0;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int n=s.size();

    removeMid(s,count,n);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}