#include <iostream>
#include <queue>
#include <TakeInputAndPrintLevelWise.cpp>
#include "BinaryTreeNode.h"

BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder, int inLength)
{
    // Write your code here
    if (postLength == 0)
    { // both lengths will be same as total no of nodes so, any one will work out
        return NULL;
    }

    int RD = postorder[postLength - 1]; // last element of postorder is our root data

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(RD);

    // to find length of left we have to traverse the inorder to find RD
    int leftLength = 0;

    while (inorder[leftLength] != RD)
    {
        leftLength++;
    }

    // now we just have to call recursion by taking care of passed parameters

    BinaryTreeNode<int> *leftChild = buildTree(postorder, leftLength, inorder, leftLength);
    BinaryTreeNode<int> *rightChild = buildTree(postorder + leftLength, postLength - leftLength - 1, inorder + leftLength + 1, inLength - leftLength - 1);

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

int main()
{
    int size;
    cin >> size;
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++)
        cin >> post[i];
    for (int i = 0; i < size; i++)
        cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelWise(root);
}