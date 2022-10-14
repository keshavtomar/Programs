#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int helper(BinaryTreeNode<int> *node, int transferred)
{
    if (node == NULL)
    {
        return transferred;
    }
    // base case complete

    // call in right with the transferred value(because everyone in the right is bigger than node data, so no need to add node and update new transferring value in right)
    // work in right is done, it will return me an value, replace me with me+that returned value, bcoz everyone in tight is bigger
    // call in left with me value, return total left and right

    int GotFromRight = helper(node->right, transferred);
    node->data += GotFromRight;
    return helper(node->left, node->data);
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root)
{
    helper(root, 0);
    return;
}

int main()
{
    return 0;
}