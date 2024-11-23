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

/////////////////////////////// Reverse Function /////////////////////////////////

Node* kGroups(Node* head, int k)
{
    if (head == NULL)
    return NULL;


    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if (forward != NULL)
    {
        head->next = kGroups(forward, k);
        //after first kgroup recursion head at the last position 
        //thats why we are joining the head-next to recusive call
    }

    return prev;
}

/////////////////////////////////////////////////////////////////////////////////////

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

    head=kGroups(head, 2);
    print(head);
}