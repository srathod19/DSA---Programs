#include <iostream>
using namespace std;
// Node class
class Node
{
public:
    int data;
    Node *next;
    Node *random;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};
// Inserting head
Node *insertHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
// Inserting  tail
Node *insertTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
Node *copyNode(Node *&head)
{
    // step 1- create a clone list
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        insertTail(cloneTail, temp->data);
        temp = temp->next;
    }
    // step 2- add cloneNode in between Original list
    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneHead->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }
    // step 3 - copy random poineters
    temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            if (temp->random != NULL)
            {

                // temp->next->random = temp->random?temp->random ->next:temp ->random;
                temp->next->random = temp->random->next;
            }
            else
            {
                temp->next = temp->random;
            }
        }
        temp = temp->next->next;
    }
    // step 4 - revert changes done in step 2
    originalNode = head;
    cloneHead = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;
        if (originalNode != NULL)
        {
            cloneNode->next = originalNode->next;
        }
        cloneNode = cloneNode->next;
    }
    // step 5 - return ans
    head = cloneHead;
}
// printing the node
void print(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *getMid(Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *merge(Node *left, Node *right)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    Node *ans = new Node(-1);
    Node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
Node *mergeSort(Node *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *mid = getMid(head);
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    Node *result = merge(left, right);
    return result;
}
int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    // insertHead(head, 2);
    insertTail(tail, 2);
    insertTail(tail, 5);
    insertTail(tail, 4);
    insertTail(tail, 3);
    print(head);
    // copyNode(head);

    print(mergeSort(head));
}

// copy linked list with random pointers
// 1)create a clone list
// 2)add cloneNode in between original node
// 3)copy random pointers (temp->next->random = temp->random->nexxt     )