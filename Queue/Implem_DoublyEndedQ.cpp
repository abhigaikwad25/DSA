#include <iostream>
using namespace std;

class Deque
{
public:
    int *arr;
    int dqfront;            //front keyword not allows=d to use in varname
    int rear;
    int size;

    Deque(int n)
    {
        this->size = n;
        arr = new int[size];
        dqfront = -1;
        rear = -1;
    }

    bool pushFront(int data)
    {
        if ((dqfront == 0 && rear == size - 1) || (rear == (dqfront - 1) % (size - 1)))     //this check queue is full or not
        {
            return false;
        }
        else if(dqfront==-1){       //queue is empty then front and rear are assign at the frist position
            dqfront=rear=0;
        }
        else if(dqfront==0){            //maintain cyclic nature
            dqfront==size-1;
        }
        else{               //Natural flow
            dqfront--;
        }
        arr[dqfront]=data;          //this line comes in every else if condition thats why take it outside common
        return true;
    }


    bool pushRear(int data)
    {
        if ((dqfront == 0 && rear == size - 1) || (rear == (dqfront - 1) % (size - 1)))   //this check queue is full or not
        {
            return false;
        }
        else if(dqfront==-1){       //queue is empty then front and rear are assign at the frist position
            dqfront=rear=0;
        }
        else if(rear==size-1 && dqfront!=0){        //maintain cyclic nature
            rear=0;
        }
        else{               //natural flow
            rear++;
        }
        arr[rear]=data;         //this line comes in every else if condition thats why take it outside common
        return true;
    }

    int popRear(){
        if(dqfront==-1){            //if queue is empty we cant do pop operation thats why return 0
            return 0;
        }
        int ans=arr[rear];          
        arr[rear]=-1;               //remove rear element after that condtion, all condition manage the location of front and rear
        if(dqfront==rear){        //Single element is availble in queue
            dqfront=rear=-1;
        }
        else if(rear==0){           //rear at the frist position and after pop rear go at the rear enmd of the queue
            rear=size-1;
        }
        else{
            rear--;         //natural flow
        }
        return ans;
    }



    int popFront(){
        if(dqfront==-1){            //if queue is empty we cant do pop operation thats why return 0
            return 0;
        }
        int ans=arr[dqfront];
        arr[dqfront]=-1;            //remove rear element after that condtion, all condition manage the location of front and rear
        if(dqfront==rear){        //Single element is availble in queue
            dqfront=rear=-1;
        }
        else if(dqfront==size-1){           //rear at the frist position and after pop rear go at the rear enmd of the queue
            dqfront=0;
        }
        else{
            dqfront++;         //natural flow
        }
        return ans;
    }


    bool isEmpty(){
        if(dqfront==-1){
            return true;            
        }
        else{
            return false;
        }
    }


    int getFront(){
        if(dqfront==-1){
            return -1;            
        }
        else{
            return arr[dqfront];
        }
    }
    

    int getRear(){
        if(dqfront==-1){
            return -1;            
        }
        else{
            return arr[rear];
        }
    }
};

int main()
{
    Deque obj(10);      //10 is size of queue

    obj.pushFront(10);
    obj.pushRear(20);

    cout<<"Front : "<<obj.getFront()<<endl;
    cout<<"Rear : "<<obj.getRear()<<endl;

    obj.popFront();

    cout<<"Front after pop front: "<<obj.getFront()<<endl;
    cout<<"Rear after pop front: "<<obj.getRear()<<endl;


    obj.popRear();

    cout<<"Front after pop rear: "<<obj.getFront()<<endl;
    cout<<"Rear after pop rear: "<<obj.getRear()<<endl;

    if(obj.isEmpty()){
        cout<<"Queeue is empty"<<endl;
    }
    else{
        cout<<"Queeue is Not empty"<<endl;
    }
}