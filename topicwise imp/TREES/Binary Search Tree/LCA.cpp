#include <iostream>
#include "BinaryTreeNode.h"

/*
LCA is the lowest common ancestor of two given data, if only one of the two node is present
return that node's data, if both are present return the the Lowest common ancestor's data,
if none is present return -1;
*/

using namespace std;

pair<int, int> LCA(BinaryTreeNode<int> *root, int a, int b)
{
    if (root == NULL)
    {
        return {-1, -1};
    }

    pair<int, int> leftAns = LCA(root->left, a, b);
    pair<int, int> rightAns = LCA(root->right, a, b);

    if (leftAns.second == -1 && rightAns.second == -1)
    {
        if (root->data == a || root->data == b)
        {
            return {root->data, 1};
        }
        else
        {
            return {-1, -1};
        }
    }

    if (leftAns.second == 1 && rightAns.second == 1)
    {
        return {root->data, 2};
    }

    if (leftAns.second == 2 || rightAns.second == 2)
    {
        if (leftAns.second == 2)
        {
            return leftAns;
        }
        else
        {
            return rightAns;
        }
    }

    if (leftAns.second == 1)
    {
        if (leftAns.first == a && root->data == b)
        {
            return {root->data, 2};
        }
        else if (leftAns.first == b && root->data == a)
        {
            return {root->data, 2};
        }
        else
        {
            return leftAns;
        }
    }

    if (rightAns.second == 1)
    {
        if (rightAns.first == a && root->data == b)
        {
            return {root->data, 2};
        }
        else if (rightAns.first == b && root->data == a)
        {
            return {root->data, 2};
        }
        else
        {
            return rightAns;
        }
    }
}

int getLCA(BinaryTreeNode<int> *root, int a, int b)
{
    pair<int, int> ans = LCA(root, a, b);
    if (ans.second == -1)
    {
        return -1;
    }
    else
    {
        return ans.first;
    }
}

int main()
{
    return 0;
}