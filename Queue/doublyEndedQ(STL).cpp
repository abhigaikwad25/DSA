#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_front(10);      //
    dq.push_back(20);       //

    cout<<"Front : "<<dq.front()<<endl;
    cout<<"Rear : "<<dq.back()<<endl;

    dq.pop_front();     //
    cout<<"Front after pop front : "<<dq.front()<<endl;
    cout<<"Rear after pop front : "<<dq.back()<<endl;

    dq.pop_back();      //
    
    if(dq.empty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }

}