#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

BinaryTreeNode<int> *constructTree(int *input, int n)
{
    if (n == 0)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[(n - 1) / 2]);

    root->left = constructTree(input, (n - 1) / 2);
    root->right = constructTree(input + (n - 1) / 2 + 1, n / 2);

    return root;
}

int main()
{
    return 0;
}