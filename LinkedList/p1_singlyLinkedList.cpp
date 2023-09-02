#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // Memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for data: " << value << endl;
    }
};
// inserting at head
void insertAtHead(Node *&head, int data)
{
    // new node create`
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// inserting at tail
void insertAtTail(Node *&tail, int data)
{
    // new node create`
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
// printing nodes
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
void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    // Insert At start

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

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(int position, Node *&head, Node *&tail)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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
Node *uniqueSorted(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
Node *unsortedList(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {

        Node *temp = curr->next;

        while (temp != NULL)
        {
            if (curr->data == temp->data && temp->next != NULL)
            {
                Node *next_next = temp->next;
                Node *nodeToDelete = temp;
                delete nodeToDelete;
                temp->next = next_next;
            }
            if (curr->data == temp->data && temp->next == NULL)
            {
                Node *next_next = NULL;
                Node *nodeToDelete = temp;
                delete nodeToDelete;
                temp->next = next_next;
            }

            temp = temp->next;
        }
        curr = curr->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1; // for head
    Node *tail = node1; // for tail

    insertAtTail(tail, 11);
    insertAtHead(head, 9);
    insertAtTail(tail, 11);
    insertAtPosition(tail, head, 4, 101);
    // print(head);
    // deleteNode(4, head, tail);
    print(head);
    // uniqueSorted(head);
    cout << "HI" << endl;
    unsortedList(head);
    cout << "HIiiii" << endl;
    print(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    return 0;
}