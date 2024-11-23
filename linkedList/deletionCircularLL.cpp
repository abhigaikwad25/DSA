#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory Relesed"<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        newNode->next=newNode;
        tail=newNode;
    }
    else{
        Node* curr=tail;
        //non empty list
        while(curr->data!=element){
            curr=curr->next;
        }

        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp; 
        
        // Update the tail if the new node is inserted after the current tail
        if (curr == tail) {
            tail = temp;
        }
    }
}




void deletion(Node* tail,int value){
    if(tail==NULL){
        cout<<"List is empty, Please check again"<<endl;
        return;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        if (tail==curr) {
            tail = prev;
        }
        curr->next=NULL;
        delete curr;
    }
    //error in deletion in tail, Need to fix
}




void print(Node* &tail){
    Node* temp=tail;
    do{
        cout<<temp->next->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}

int main(){
    Node* tail=NULL;

    insertNode(tail,2,10);
    print(tail);

    insertNode(tail,10,15);
    print(tail);

    insertNode(tail,15,20);
    print(tail);

    insertNode(tail,20,25);
    print(tail);

    insertNode(tail,10,30);
    print(tail);

    insertNode(tail,25,35);
    print(tail);
    cout<<"Tail : "<<tail->data<<endl;
    cout<<"Tail next : "<<tail->next->data<<endl;


    //Deletion
    deletion(tail,35);
    print(tail);
    cout<<"Tail : "<<tail->data<<endl;
    cout<<"Tail next : "<<tail->next->data<<endl;
}