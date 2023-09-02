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
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory is free:" << val << endl;
    }
};
void insertNode(Node *&tail, int element, int data) // insertion in circular lineked list
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Not emptyy
        Node *curr = tail;
        // searching the element
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // found the element(out of loop)
        Node *temp = new Node(data); // creating the new node
        temp->next = curr->next;
        curr->next = temp;
    }
}
// printing the nodes
void print(Node *&tail)
{

    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "list is  empty " << endl;
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
        cout << "Please check again,list is empty" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // deleting from single node
        if (curr == prev)
        {
            tail = NULL;
        }
        // deleting from a more than single node
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;

        delete curr;
    }
}
bool isCircular(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return false;
    }
    else
    {
        while (tail != temp && temp != NULL)
        {
            temp = temp->next;
        }
        if (temp == NULL)
            return false;
        if (temp == tail)
            return true;
    }
}
bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "present on ; " << temp->data << endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
Node *floydDetection(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}
Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floydDetection(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node *&head)
{

    if (head == NULL)
        return;

    Node *starting = getStartingNode(head);
    Node *temp = starting;
    while (temp->next != starting)
    {
        starting = starting->next;
    }
    starting->next = NULL;
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 4);
    insertNode(tail, 4, 5);
    insertNode(tail, 3, 1);
    deleteNode(tail, 3);
    print(tail);
    // isCircular(tail);
    removeLoop(tail);
    if (floydDetection(tail) != NULL)
    {
        cout << "Linked list is circular" << endl;
    }
    else
    {
        cout << "Linked List is not circular" << endl;
    }
    cout << "Loop starts at : " << getStartingNode(tail)->data << endl;

    return 0;
}
