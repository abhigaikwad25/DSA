#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size=size;
        arr=new int(size);
        top=-1;
    }

    void push(int ele){
        if(size-top>=1){
            top++;
            arr[top]=ele;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"array is empty"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(size>=0){
            return 0;
        }
        else{
            return 1;
        }
    }
};

int main(){
    Stack obj1(5);

    obj1.push(12);
    obj1.push(24);

    obj1.pop();

    cout<<"giving top element : "<<obj1.peek()<<endl;

    cout<<"Empty or Not : "<<obj1.empty()<<endl;

}
