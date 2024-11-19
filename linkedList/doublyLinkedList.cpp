#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};




//Insert at head
void insertAtHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

}




//Insert at tail
void insertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);

        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}




//Insert At position
void insertAtposition(Node* &head,Node* &tail,int position,int d){
    
    if(position==1){
        insertAtHead(head,tail,d);
        return ;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return ;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}




void print(Node* &head){
    Node* temp=head;

    //iterate for print
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // Node* node1=new Node(10);

    Node* head=NULL;
    Node* tail=NULL;

    print(head);

    insertAtHead(head,tail,15);
    print(head);

    insertAtTail(head,tail,20);
    print(head);

    insertAtposition(head,tail,3,25);
    print(head);
}