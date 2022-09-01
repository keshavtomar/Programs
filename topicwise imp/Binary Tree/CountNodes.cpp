#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

int numNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + numNodes(root->left) + numNodes(root->right);
}

int main()
{
    return 0;
}