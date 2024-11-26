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

/////////////////////////////// Remove Duplicates UnSorted LL ////////////////////////////////////

void solve(Node* first, Node* second) {
    
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data)) {
            
            curr1 -> next = curr2;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            
        }
        
        
    }
    
    
}

Node* sortTwoLists(Node* first, Node* second)
{
    if(first == NULL)
        return second;
    
    if(second == NULL)
        return first;
    
    if(first -> data <= second -> data ){
        solve(first, second);
    }
    else
    {
        solve(second, first);
    }
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
    cout << "2nd linked list : " << endl;
    Node *node1 = new Node(10);

    Node *head1 = node1;
    Node *tail1 = node1;

    insertAtHead(head1, 15);
    print(head1);

    insertAtTail(tail1, 25);
    print(head1);

    insertAtTail(tail1, 25);
    print(head1);

    cout << "2nd linked list : " << endl;
    Node *node2 = new Node(12);
    Node *head2 = node2;
    Node *tail2 = node2;

    insertAtHead(head2, 14);
    print(head2);

    insertAtTail(tail2, 27);
    print(head2);

    insertAtTail(tail2, 30);
    print(head2);

    cout << "Merge LL : " << endl;
    sortTwoLists(head1, head2);
    print(head1);
}