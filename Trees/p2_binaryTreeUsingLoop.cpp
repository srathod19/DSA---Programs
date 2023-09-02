#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
Node *binaryTree(Node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data left to Node: " << data << endl;
    root->left = binaryTree(root->left);

    cout << "Enter the data right to Node: " << data << endl;
    root->right = binaryTree(root->right);
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    binaryTree(root);
    inorder(root);
    return 0;
}
// 1 2 3 6 -1 -1 5 -1 -1 -1 4 -1 -1 -1