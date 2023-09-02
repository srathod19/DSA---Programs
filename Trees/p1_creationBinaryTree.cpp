#include <iostream>
#include <queue>
#include <vector>
#include <stack>
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
// create a function to build a tree
Node *buildTree(Node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    // inserting data to left node
    cout << "Data to 'left node of': " << data << endl;
    root->left = buildTree(root->left);

    cout << "Data to 'Right node of': " << data << endl;
    root->right = buildTree(root->right);
    return root;
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
Node *reverseOrderLevel(Node *root)
{
    cout << "--In the reverse order--" << endl;
    // Take a Stack of integer and Queue of TreeNode pointer and insert the root TreeNode in the Queue.
    queue<Node *> q1;
    stack<Node *> s;
    q1.push(root);

    // getting the front element of the node and add it to stack
    while (!q1.empty())
    {

        // Now get the front element of Queue and add it in Stack.
        Node *temp = q1.front();
        s.push(temp);
        // Push the right and then the left child of the front element in the Queue(If the child is not NULL)
        if (temp->right)

        {
            q1.push(temp->right);
        }
        if (temp->left)
        {
            q1.push(temp->left);
        }
        //  remove the element from Queue.
        q1.pop();
    }
    // Now retrieve the elements from Stack and print it.
    while (!s.empty())
    {
        cout << s.top()->data << " ";
        s.pop();
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
void *buildFromLevelOrder(Node *&root)
{
    queue<Node *> q;
    cout << "enter the data for root:" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout << "enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
int maxDepth(Node *root)
{
    // Write your code here.
    if (root == NULL)
    {
        return 0;
    }

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
pair<int, int> diameter(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameter(root->left);
    pair<int, int> right = diameter(root->right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
// zigzag traversal

// Node *zigzagTreeTraversal(Node *root)
// {
//     queue<Node *> q;
//     vector<int> result;
//     if (root == NULL)
//     {
//         return result;
//     }
//     bool leftToRight = true;
//     q.push(root);
//     while (!q.empty())
//     {
//         int size = q.size();
//         vector<int> ans(size);
//         for (int i = 0; i < size; i++)
//         {
//             Node *frontNode = q.front();
//             q.pop();
//             int index = leftToRight ? i : size - i - 1;
//             ans[index] = frontNode->data;
//             if (frontNode->left)
//             {
//                 q.push(frontNode->left);
//             }
//             if (frontNode->right)
//             {
//                 q.push(frontNode->right);
//             }
//         }
//         leftToRight = !leftToRight;
//         for (auto i : ans)
//         {
//             result.push_back(i);
//         }
//     }
//     return result;
//     // find(root,q,ans, leftToRight);
//     //    Write your code here.
// }
// // is identical tree
// /*
// bool isidentical(Node *root, Node *root2)
// {
//     if (root == NULL && root2 == NULL)
//     {
//         return true;
//     }

//     if (root != NULL && root2 == NULL)
//     {
//         return false;
//     }

//     if (root == NULL && root2 != NULL)
//     {
//         return false;
//     }
//     bool left = isidentical(root->left, root2->left);
//     bool right = isidentical(root->right, root2->right);

//     bool val = root->data == root2->data;
//     if (left && right && val)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// */
// // check if tree is balanced or not
pair<bool, int> isBalanced(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = isBalanced(root->left);
    pair<bool, int> right = isBalanced(root->right);
    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;
    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;
    if (rightAns && leftAns && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

int main()
{
    // create a root node
    Node *root = NULL;
    buildFromLevelOrder(root);
    // level order
    // inorder traversal
    cout << endl
         << "--Inorder Traversal :";
    inorderTraversal(root);
    cout << ", Height is : " << maxDepth(root) << endl;         // getting the height of tree.
    cout << ", DIAMETer is : " << diameter(root).first << endl; // getting the diameter of tree.
    if (isBalanced(root).first)
    {
        cout << "is balanced" << endl;
    }
    else
    {
        cout << "is not balaanced" << endl;
    }
    // levelOrderTraversal(root);
    /*
    root = buildTree(root);
    1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    // reverse level order
    reverseOrderLevel(root);

    // preorder traversal
    cout << endl
         << "--Preorder traversal--" << endl;
    preorderTraversal(root);
    // post order taversal
    cout << endl
         << "--post order traversal--" << endl;
    postOrderTraversal(root);
     cout << endl
         << "--Build from level order--" << endl;
    */
    return 0;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}