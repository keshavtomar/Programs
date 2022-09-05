#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

bool searchInBST(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL)
    {
        return 0;
    }
    return (root->data == k || searchInBST(root->left, k) || searchInBST(root->right, k));
}

int main()
{
    return 0;
}