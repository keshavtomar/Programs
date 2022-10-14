#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

/*
Two nodes are cousins if they are on the same level and they don't have the same parent

given a root of binary tree(not BST) and two nodes we have to check that these nodes are cousins or not
Approach-> write a function to check the level, than write a bool returning function to check if they
belong to the same parent

*/

bool isBrother(BinaryTreeNode<int> *root, int p, int q)
{
    if (root == NULL)
    {
        return false;
    }

    bool leftAns = isBrother(root->left, p, q);
    bool rightAns = isBrother(root->right, p, q);

    bool me;

    if (root->left && root->right)
    {
        if ((root->left->data == p && root->right->data == q) || (root->left->data == p || root->right->data == q))
        {
            me = true;
        }
        else
        {
            me = false;
        }
    }
    else
    {
        me = false;
    }

    return me || leftAns || rightAns;
}

int level(BinaryTreeNode<int> *root, int p)
{
    if (root == NULL)
    {
        return -1;
    }

    int leftAns = level(root->left, p);
    int rightAns = level(root->right, p);

    int AlreadyFound = max(leftAns, rightAns);

    if (AlreadyFound != -1)
    {
        return AlreadyFound + 1;
    }
    else if (root->data == p)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

bool isCousin(BinaryTreeNode<int> *root, int p, int q)
{
    if ((!isBrother(root, p, q)) && (level(root, p) == level(root, q)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    return 0;
}