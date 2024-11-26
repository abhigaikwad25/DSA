#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Inserting at head
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d); // this is new node give name temp and we want to insert at head
    temp->next = head;
    head = temp;
}

////Inserting at tail
void insertAtTail(Node* &head,Node *&tail, int d)
{
    Node *temp = new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

// Inserting at inbetween the linked list
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // if position is 1
    if (position == 1)
    {
        insertAtHead(head, d);
        return; // exit after insertionAtHead function
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // if position is last tail is not updated for that
    if (temp->next == NULL)
    {
        insertAtTail(head,tail, d);
        return; // exit after insertionAtTail function
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

/////////////////////////////// Remove Duplicates UnSorted LL ////////////////////////////////////

Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}

Node* addition(Node* firstLL,Node* secondLL){
    int carry=0;
    Node* ansHead=NULL;
    Node* ansTail=NULL;

    while(firstLL!=NULL && secondLL!=NULL){
        int sum=carry+firstLL->data+secondLL->data;

        int digit=sum%10;
        carry=sum/10;

        insertAtTail(ansHead,ansTail,digit);
        
        firstLL=firstLL->next;
        secondLL=secondLL->next;
    }
    while(firstLL!=NULL){
        int sum=carry+firstLL->data;
        int digit=sum%10;
        carry=sum/10;

        insertAtTail(ansHead,ansTail,digit);

        firstLL=firstLL->next;
    }
    while(secondLL!=NULL){
        int sum=carry+secondLL->data;
        int digit=sum%10;
        carry=sum/10;

        insertAtTail(ansHead,ansTail,digit);

        secondLL=secondLL->next;
    }

    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;

        insertAtTail(ansHead,ansTail,digit);
    }
    return ansHead;
    
}

Node* addTwoNo(Node* firstLL,Node* secondLL){
    
    firstLL=reverse(firstLL);
    secondLL=reverse(secondLL);

    Node* ans=addition(firstLL,secondLL);

    ans=reverse(ans);

    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void print(Node *&head)
{
    Node *temp = head; // assign temp name to head
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    cout << "1st linked list : " << endl;
    Node *node1 = new Node(4);

    Node *head1 = node1;
    Node *tail1 = node1;


    insertAtTail(head1,tail1, 5);
    print(head1);


    cout << "2nd linked list : " << endl;
    Node *node2 = new Node(3);
    Node *head2 = node2;
    Node *tail2 = node2;

    insertAtTail(head2,tail2, 2);
    print(head2);

    insertAtTail(head2,tail2, 5);
    print(head2);

    cout << "Addition of LL : " << endl;
    Node* result=addTwoNo(head1, head2);
    print(result);
}