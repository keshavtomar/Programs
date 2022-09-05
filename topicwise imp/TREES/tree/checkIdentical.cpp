#include <iostream>
#include "treeNode.h"

using namespace std;

/*
In this question we have to check that are the given two trees completely identical
check the rootdata is same, no of childrens are same, call on every children and
check the returned bool
*/

bool areIdentical(TreeNode<int> *root1, TreeNode<int> *root2)
{
    bool ans = 1; // suppose they are identical
    if (root1->data != root2->data)
    {
        return 0;
    }

    if (root1->children.size() != root2->children.size())
    {
        return 0;
    }

    for (int i = 0; i < root1->children.size(); i++)
    {
        // doing AND operation b/w ans and returned value, ans will change to 0 for always if any of the child returns 0
        ans &= areIdentical(root1->children[i], root2->children[i]);
    }

    return ans;
}

int main()
{
    return 0;
}