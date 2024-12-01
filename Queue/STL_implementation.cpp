#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Before Pop"<<endl;
    cout<<"Front : "<<q.front()<<endl;
    cout<<"Back : "<<q.back()<<endl;
    cout<<"Size : "<<q.size()<<endl;

    q.pop();
    cout<<"After Pop"<<endl;
    cout<<"Front : "<<q.front()<<endl;
    cout<<"Back : "<<q.back()<<endl;
    cout<<"Size : "<<q.size()<<endl;

    //Check empty or not
    cout<<"Empty or Not : "<<q.empty()<<endl;
}