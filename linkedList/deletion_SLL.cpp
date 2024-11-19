#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        
        //realsed the memory
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node and data "<<endl;
    }
};


//Inserting at head
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);     //this is new node give name temp and we want to insert at head
    temp->next=head;
    head=temp;

}


////Inserting at tail
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}


//Inserting at inbetween the linked list
void insertAtPosition(Node* &tail,Node* &head,int position,int d){

    //if position is 1
    if(position==1){
        insertAtHead(head,d);
        return;     //exit after insertionAtHead function
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //if position is last tail is not updated for that
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return; //exit after insertionAtTail function
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}



//deletion
void deletion(int position,Node* &head,Node* &tail){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;    //creating one null node
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        if(curr->next==NULL){
            prev->next=NULL;
            tail=prev;
            delete curr;
            return;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp=head;    //assign temp name to head
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);

    Node* head=node1;
    Node* tail=node1;
    print(head);

    insertAtHead(head,15);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtPosition(tail,head,4,20);
    print(head);

    deletion(4,head,tail);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
}