#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory Relesed" << endl;
    }
};

// Insert at head
void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at tail
void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Insert At position
void insertAtposition(Node *&head, Node *&tail, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
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
        insertAtTail(head, tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deletion(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *previous = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            previous = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            previous->next = NULL;
            tail = previous;
            delete curr;
            return;
        }

        previous->next = curr->next;
        curr->next->prev = previous;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
    // cout<<"Deletion Successfull"<<endl;
}

void print(Node *&head)
{
    Node *temp = head;

    // iterate for print
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Node* node1=new Node(10);

    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    insertAtHead(head, tail, 15);
    print(head);

    insertAtTail(head, tail, 20);
    print(head);

    insertAtposition(head, tail, 3, 25);
    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    insertAtposition(head, tail, 1, 30);
    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    deletion(head, tail, 4);
    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
}


// ~Node():
// This is the destructor for the Node class. It is called automatically when an object of the Node class is destroyed, ensuring cleanup of resources.

// int value = this->data;:
// This line retrieves the value of the node's data member and assigns it to the local variable value. However, this step is unnecessary in the context of memory cleanup and can be omitted.

// if (next != NULL):
// This checks if the next pointer (which points to the next node in a linked list) is not null. If next is null, it means this is the last node in the list.

// delete next;:
// If next is not null, the destructor recursively deletes the node pointed to by next. This ensures that all nodes in the linked list are deleted, starting from the current node.

// next = NULL;:
// After deleting the next node, the next pointer is set to NULL to avoid dangling pointers.