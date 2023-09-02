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
    ~Node()
    {
        int val = this->data;
        while (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for : " << val << endl;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
// inserting second tail/node
void insertAtTail2(Node *&tail2, int data)
{
    Node *temp = new Node(data);
    tail2->next = temp;
    tail2 = tail2->next;
}
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
Node *sortList(Node *&head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        else if (temp->data == 1)
        {
            oneCount++;
        }
        else if (temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
}
Node *mergeList(Node *&first, Node *&second)
{
    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;

    while ((curr2 != NULL) && (next1 != NULL))
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
            }
        }
    }
    first = curr1;
}
// Node *solve(Node *&first, Node *&second)
// {
//     if (first == NULL)
//         return second;

//     if (second == NULL)
//         return first;
//     if (first->data <= second->data)
//     {
//         mergeList(first, second);
//     }
//     else
//     {
//         mergeList(second, first);
//     }
// }
Node *getMid(Node *&head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

bool isPelindrome(Node *head)
{
    if (head->next == NULL)
    {
        return true;
    }
    // step 1 - find middle
    Node *middle = getMid(head);
    // step 2 - reverse after middle
    Node *temp = middle->next;
    middle->next = reverse(temp);
    // step 3 compare both half
    Node *head1 = head;
    Node *head2 = middle->next;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // repeat step 2
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
}
int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 10);
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 16);
    // insertAtTail(tail, 15);
    print(head);
    reverse(head);
    print(head);
    if (isPelindrome(head))
    {
        cout << "is pelindrome";
    }
    else
    {
        cout << "Not pelindrome";
    }
    // sortList(head);
    // second list
    // Node *node2 = new Node(12);
    // Node *tail2 = node2;

    // insertAtTail2(tail2, 2);
    // print(tail2);
    // mergeList(head, tail2);
    // print(head);
}