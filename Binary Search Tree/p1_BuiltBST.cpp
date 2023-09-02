#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

Node *levelOrderTraversal(Node *root)
{
    // create a queue
    queue<Node *> q;

    // inserting a root to queue
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            // push left node if its not null`
            if (temp->left)
            {
                q.push(temp->left);
            }

            // push right node if its not null`
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}
int findMin(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int findMax(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}
Node *inorderPred(Node *root, int k)
{
    if (root == NULL)
    {
        return NULL;
    }
    Node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            return temp;
        }

        if (temp->data > k)
        {
            inorderPred(temp->left, k);
        }
        else
        {
            inorderPred(temp->right, k);
        }
    }
}
Node *deleteFromBST(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        // for left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // for right child
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int min = findMin(root->right);
            root->data = min;
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}
int main()
{
    Node *root = NULL;
    cout << "enter the data to create a BST" << endl;
    takeInput(root);
    cout << "Level order: ";
    levelOrderTraversal(root);
    cout << endl;
    cout << "post order: ";
    postOrderTraversal(root);
    cout << endl;
    cout << "pre order: ";
    preorderTraversal(root);
    cout << endl;
    cout << "in order: ";
    inorderTraversal(root);
    cout << endl;
    // finding the min and max
    cout << "Min is: " << findMin(root) << endl;
    cout << "Max is: " << findMax(root) << endl;
    cout << "inorder Predecessor is: " << inorderPred(root, 7)->data << endl;
    cout << "Deleted Node : " << deleteFromBST(root, 90)->data << endl;
    cout << endl;
    cout << "in order: ";
    inorderTraversal(root);
    return 0;
}
// 10 8 21 7 27 5 4 3 -1
// 50 20 70 10 30 90 110 - 1