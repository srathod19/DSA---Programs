#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
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
        cout << "Memory is free for: " << val << endl;
    }
};
void insertNode(Node *&tail, int element, int data)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = tail;
        newNode->prev = tail;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = temp;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "list is empty." << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "List is empty, please check it again.";
        return;
    }
    else
    {
        // prev - the previous node of curr node
        Node *prev = tail;
        // curr - the node which you're going to delete.
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // handling single node
        if (curr == prev)
        {
            tail = NULL;
        }
        // handling multiple node
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    Node *tail = NULL;
    insertNode(tail, 10, 11);
    insertNode(tail, 11, 12);
    insertNode(tail, 12, 13);
    insertNode(tail, 13, 14);
    print(tail);
    deleteNode(tail, 11);
    print(tail);
}
