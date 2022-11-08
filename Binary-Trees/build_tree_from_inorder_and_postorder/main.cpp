#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

public:
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

int search(int inOrder[], int start, int end, int val)
{
    for (int i = 0; i <= end; i++)
    {
        if (inOrder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int postOrderArr[], int inOrderArr[], int start, int end)
{
    static int idx = 4;

    if (start > end)
    {
        return NULL;
    }

    int val = postOrderArr[idx];
    idx--;

    Node *curr = new Node(val);

    if (start == end)
    {
        return curr;
    }

    int pos = search(inOrderArr, start, end, val);
    curr->right = buildTree(postOrderArr, inOrderArr, pos + 1, end);
    curr->left = buildTree(postOrderArr, inOrderArr, start, pos - 1);
    return curr;
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{

    int postOrderArr[] = {4, 2, 5, 3, 1};
    int inOrderArr[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(postOrderArr, inOrderArr, 0, 4);
    inorderPrint(root);

    return 0;
}