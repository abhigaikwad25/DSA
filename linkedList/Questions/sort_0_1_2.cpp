#include<iostream>
#include<map>
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


/////////////////////////////// Remove Duplicates UnSorted LL ////////////////////////////////////


Node* sortLL(Node* head){

    if(head==NULL){
        cout<<"LL is Empty"<<endl;
        return head;
    }
    int zeroCount=0;
    int oneCount=0;
    int twoCount=0;
    Node* temp=head;

    while(temp!=NULL){

        if(temp->data==0){
            zeroCount++;
        }
        else if(temp->data==1){
            oneCount++;
        }
        else if(temp->data==2){
            twoCount++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
    return head;
    // cout<<"Sort Succesfully"<<endl;
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
    Node* node1=new Node(1);

    Node* head=node1;
    Node* tail=node1;
    print(head);

    insertAtHead(head,0);
    print(head);

    insertAtTail(tail,2);
    print(head);

    insertAtTail(tail,2);
    print(head);


    insertAtPosition(tail,head,5,1);
    print(head);

    sortLL(head);
    print(head);

}