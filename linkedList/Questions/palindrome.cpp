#include <iostream>
#include <map>
#include <vector>
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
        insertAtTail(tail, d);
        return; // exit after insertionAtTail function
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

/////////////////////////////// palindrome ////////////////////////////////////

bool solve(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

void palindrome(Node *head)
{
    Node *temp = head;
    vector<int> arr;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    if(solve(arr)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}

///////////////////////////////////////////////////////////////////////////////////////

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
    Node *node1 = new Node(1);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 0);
    print(head);

    insertAtHead(head, 0);
    print(head);

    insertAtHead(head, 1);
    print(head);


    palindrome(head);
}