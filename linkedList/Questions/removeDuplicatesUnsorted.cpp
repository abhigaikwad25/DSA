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


void removeDuplicates(Node* head){

    if(head==NULL){
        cout<<"LL is Empty"<<endl;
        return ;
    }
    Node* temp=head;
    Node* prev=NULL;
    map<int,bool> visited;

    while(temp!=NULL){

        if(visited[temp->data]==true){
            Node* nodeToDelete=temp;
            prev->next=temp->next;
            temp=temp->next;
            delete nodeToDelete;
        }
        else{
            visited[temp->data]=true;
            prev=temp;
            temp=temp->next;
        }
    }
    cout<<"Duplicates Remove succesfully"<<endl;
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

    insertAtHead(head,15);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtTail(tail,25);
    print(head);


    insertAtPosition(tail,head,4,20);
    print(head);

    removeDuplicates(head);
    print(head);

    
}