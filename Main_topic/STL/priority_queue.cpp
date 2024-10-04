#include<iostream>
using namespace std;
#include<queue>

int main(){

    //max heap : adjust queue in higher number frist
    priority_queue<int> maxi;

    maxi.push(0);
    maxi.push(2);
    maxi.push(3);
    maxi.push(1);

    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;


    //min heap : adjust queue as lower number frist
    priority_queue<int,vector<int>,greater<int>> mini;

    mini.push(0);
    mini.push(3);
    mini.push(2);
    mini.push(4);
    mini.push(1);

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
}