#include <iostream>
#include "treeNode.h"

using namespace std;

/*
Given a generic tree, find and return the node for which sum of its data 
and data of all its child nodes is maximum.
In the sum, data of the node and data of its immediate child nodes has to be taken
*/

TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    int rootdatasum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        rootdatasum += root->children[i]->data;
    }

    TreeNode<int> *ans = root;

    if (root->children.size())
    {
        TreeNode<int> *ret;
        for (int i = 0; i < root->children.size(); i++)
        {
            ret = maxSumNode(root->children[i]);
        }

        int retsum = ret->data;

        for (int i = 0; i < ret->children.size(); i++)
        {
            retsum += ret->children[i]->data;
        }

        if (retsum > rootdatasum)
        {
            ans = ret;
        }
    }

    return ans;
}

int main()
{
    return 0;
}