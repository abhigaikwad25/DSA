#include<iostream>
#include<vector>
using namespace std;

class Queue{
    public:
        int *arr;
        int qfront;
        int rear;
        int size;


    Queue(int size){
        this->size=size;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    

    void push(int ele){
        if(rear==size){
            cout<<"Queue is full"<<endl;

        }
        else{
            arr[rear]=ele;
            rear++;
        }
    } 

    int pop(){
        if(qfront==rear){//check it empty or not
            return -1;
        }
        else{
            //int type of function wants to write return statment, ans store arr of qfront 
            int ans= arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int getFront(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

    int back(){
        //check empty or not
        if(qfront==rear){
            return -1;
        }
        else{
            //rear pointing to next empty position of array thats why rear-1 give correct rear element 
            return arr[rear-1];
        }
    }

    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }
    
};

int main(){
    Queue obj(10);

    obj.push(12);
    obj.push(22);

    cout<<"front : "<<obj.getFront()<<endl;
    cout<<"Back : "<<obj.back()<<endl;

    obj.pop();
    cout<<"front after pop: "<<obj.getFront()<<endl;
    cout<<"Back after pop: "<<obj.back()<<endl;

    cout<<"Check empty or not : "<<obj.isEmpty()<<endl;

} 