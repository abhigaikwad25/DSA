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



/////////////////////////////// Circular Linked List ////////////////////////////////////
//Checks LL is circular or not
bool checkCircular(Node* head){
    Node* temp=head->next;

    if(head==NULL){
        return true;
    }
    else{
        while(temp!=NULL && temp!=head){
            temp=temp->next;
        }
        if(temp==NULL){
            return false;
        }
        if(temp==head){
            return true;
        }
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////

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

    // insertAtHead(head,15);
    // print(head);

    // insertAtTail(tail,25);
    // print(head);

    insertAtPosition(tail,head,2,20);
    print(head);

    cout<<"Head : "<<head->data<<endl;
    cout<<"Head : "<<tail->data<<endl;

    if(checkCircular(tail)){
        cout<<"Circular LL"<<endl;
    }
    else{   
        cout<<"Non Circular LL"<<endl;
    }
}