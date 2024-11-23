#include <iostream>
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
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Inserting at inbetween the linked list
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

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
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

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

///////////////////////////// Middle Element ///////////////////////////////////

void middleEle(Node *&head)
{

    //Approach 1

    // Node *temp = head;
    // int len = 0;

    // while (temp != NULL)
    // {
    //     temp = temp->next;
    //     len++;
    // }

    // int mid = len / 2 + 1;
    // Node *findMid = head;
    // int cnt = 1;
    // while (cnt != mid)
    // {
    //     findMid = findMid->next;
    //     cnt = cnt + 1;
    // }

    // cout << "Mid of Linked List : " << findMid->data << endl;
    // return;


    //Approach 2
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    cout<<"Middle element : "<<slow->data<<endl;
}


//Approach 2



////////////////////////////////////////////////////////////////////////////////

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 25);
    print(head);

    insertAtPosition(tail, head, 4, 20);
    print(head);

    insertAtPosition(tail, head, 3, 30);
    print(head);

    middleEle(head);
}