#include <iostream>
#include "treeNode.h"

using namespace std;

TreeNode<int> *maxDataNode(TreeNode<int> *root)
{
    TreeNode<int> *ans = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *ret = maxDataNode(root->children[i]);
        if (ret->data > ans->data)
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