#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for data: " << val << endl;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data); // creating  a new node
    temp->next = head;           // adding head(1st) node to new node
    head->prev = temp;           // addingg new node to 1st node
    head = temp;                 // updating head node
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data); // creating a node
    tail->next = temp;           // adding new node into previous node
    temp->prev = tail;           // adding previoud node to the new node
    tail = temp;                 // updating tail
}
void insertAtMid(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    // insertion at position
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    // deleting first node
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
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        // handling tail
        if (prev->next == NULL)
        {
            tail = prev;
        }
        else
        {
            tail = prev->next;
        }
        cout << "last node: " << prev->data;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 11); /// Inserting at head
    insertAtTail(tail, 12);
    insertAtMid(head, tail, 3, 101);
    deleteNode(4, head, tail);
    print(head);
}