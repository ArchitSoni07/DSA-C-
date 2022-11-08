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

int search(int inOrderArr[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrderArr[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int preOrderArr[], int inOrderArr[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    int curr = preOrderArr[idx];
    idx++;

    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }
    int pos = search(inOrderArr, start, end, curr);
    node->left = buildTree(preOrderArr, inOrderArr, start, pos - 1);
    node->right = buildTree(preOrderArr, inOrderArr, pos + 1, end);

    return node;
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data;
    inorderPrint(root->right);
}

int main()
{

    int preOrderArr[] = {1, 2, 4, 3, 5};
    int inOrderArr[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(preOrderArr, inOrderArr, 0, 4);
    inorderPrint(root);

    return 0;
}