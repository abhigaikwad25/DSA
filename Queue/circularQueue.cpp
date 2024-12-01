#include <iostream>
#include <vector>
using namespace std;

class circularQueue
{
public:
    int *arr;
    int qfront;
    int rear;
    int size;

    circularQueue()
    {
        size = 100000;
        arr = new int[size];
        qfront = -1;
        rear = -1;
    }

    void enqueue(int data)
    {
        if (qfront == 0 && rear == size - 1 || rear == (qfront - 1) % (size - 1))
        {
            cout << "queue is Full" << endl;
        }
        else if (qfront == -1)      //If queue is empty
        {
            qfront=rear=0;
            arr[rear] = data;
            rear++;
        }
        else if(qfront!=0 && rear==size-1){
            rear=0;
            arr[rear]=data;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue(){
        if(qfront==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans=arr[qfront];        //store in ans for returnn statment because it is int type function
        arr[qfront]=-1;             //delete the front element
        if(qfront==rear){       //Only one element is present in queue
            qfront=-1;
            rear=-1;
        }
        else if(qfront==size-1){        //qfront at the last position of the queue
            qfront=0;
        }                               //circularly assign at the frist position of the queue
        else{
            qfront++;                   //front shift to next postion
        }
        return ans;
    }


    int getFront(){
        return arr[qfront];
    }
};

int main()
{
    circularQueue obj;

    obj.enqueue(22);
    obj.enqueue(33);
    cout<<"Front : "<<obj.getFront()<<endl;

    obj.dequeue();
    cout<<"Front after dequeue: "<<obj.getFront()<<endl;

    obj.dequeue();
    cout<<"Front after dequeue: "<<obj.getFront()<<endl;
}