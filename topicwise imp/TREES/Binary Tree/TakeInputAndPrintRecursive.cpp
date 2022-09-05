#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " : ";
    if (root->left != NULL)
    {
        cout << "L-" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << " R-" << root->right->data;
    }
    cout << endl;

    printTree(root->left);
    printTree(root->right);
}

/* This method works on the same principle of recursion where left - left - left is filled first,
once done it comest to left-left-right, so enter the input carefully */
BinaryTreeNode<int> *takeInput()
{
    // In this we will use -1 as terminator, same as linkedList
    int rootData;
    cout << "Enter Data : ";
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;

    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    printTree(root);
    return 0;
}