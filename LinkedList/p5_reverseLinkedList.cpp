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
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void reverseLinkedList(Node *&head) // reversing a linked list (using loop)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        // returning prev as new head
        head = prev;
    }
}
// reverse linkedlist using {recursion }
void recursive(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    recursive(head, forward, curr);
    curr->next = prev;
}
Node *recursiveLinkedList(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    recursive(head, curr, prev);
    return head;
}

int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
// middle of linkedlist
Node *middleLinkdeList(Node *head)
{
    int len = getLength(head);
    int ans = (len / 2);
    Node *temp = head;
    int count = 0;
    while (count != ans)
    {
        head = head->next;
        count++;
    }
    return head;
}
Node *getMiddle(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
        return head;
    if (head->next->next == NULL)
        return head->next;
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
// reverse in k group
Node *kReverse(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    // step 1: reverse first k nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;

    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }
    // returning the prev as head
    return prev;
}

bool isCircular(Node *&tail)
{
    Node *temp = tail->next;
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return true;
    }
    while (tail != temp && temp != NULL)
    {
        temp = temp->next;
    }

    if (temp == tail)
    {

        return true;
    }

    return false;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // insertAtHead(head, 11);
    insertAtTail(tail, 11);
    insertAtTail(tail, 12);
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 16);
    print(head);

    if (isCircular(head))
    {
        cout << "Linked list is circular" << endl;
    }
    else
    {
        cout << "Linked List is not circular" << endl;
    }
    // reverseLinkedList(head);
    // recursiveLinkedList(head);
    // print(head);
    // cout << "Middle of the linked list is1: " << middleLinkdeList(head)->data << endl;
    // cout << "Middle of the linked list is2: " << getMiddle(head)->data << endl;
    kReverse(head, 2);
    print(head);
    return 0;
}