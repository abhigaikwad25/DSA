#include<iostream>
using namespace std;
#include<queue>

int main(){
    queue<string> q;

    q.push("Hi");
    q.push("I am");
    q.push("Abhijit");


    cout<<"first element in queue : "<<q.front()<<endl;
    cout<<"last element in queue : "<<q.back()<<endl;

    cout<<"Size before pop : "<<q.size()<<endl;
    q.pop();
    cout<<"Size after pop : "<<q.size()<<endl;

    cout<<"queue is empty or not : "<<q.empty()<<endl;
}