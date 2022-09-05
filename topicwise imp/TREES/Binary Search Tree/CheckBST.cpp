#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

bool helper(BinaryTreeNode<int> *root, int minV, int maxV)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->data < minV || root->data > maxV)
    {
        return false;
    }

    return (helper(root->left, minV, root->data) && helper(root->right, root->data, maxV));
}

bool isBST(BinaryTreeNode<int> *root)
{
    return helper(root, INT32_MIN, INT32_MAX);
}

int main()
{
    return 0;
}