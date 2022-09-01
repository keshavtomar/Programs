#include <iostream>
#include <queue>
#include <TakeInputAndPrintLevelWise.cpp>
#include "BinaryTreeNode.h"

BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder, int inLength)
{
    if (preLength == 0)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(preorder[0]);

    int x = root->data;

    int leftLength = 0;

    while (inorder[leftLength] != x)
    {
        leftLength++;
    }

    // this way we will find out number of nodes in left

    // now we just have to pass the correct parameters to construct left and right subtree

    BinaryTreeNode<int> *leftChild = buildTree(preorder + 1, leftLength, inorder, leftLength);
    BinaryTreeNode<int> *rightChild = buildTree(preorder + 1 + leftLength, preLength - leftLength - 1, inorder + 1 + leftLength, inLength - leftLength - 1);

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

int main()
{
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++)
        cin >> pre[i];
    for (int i = 0; i < size; i++)
        cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
    printLevelWise(root);
}