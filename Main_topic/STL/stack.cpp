#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<string> s;

    s.push("I");
    s.push("am");
    s.push("groot");

    cout<<"Identify top element in stack : "<<s.top()<<endl;
    cout<<"Identify size of stack Before pop: "<<s.size()<<endl;

    s.pop();
    cout<<"After pop top element in stack : "<<s.top()<<endl;

    cout<<"Identify size of stack after pop : "<<s.size()<<endl;

    cout<<"Identify stack empty or not : "<<s.empty()<<endl;
}