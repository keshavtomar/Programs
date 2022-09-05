#include <iostream>
#include "treeNode.h"

using namespace std;

int getLeafNodeCount(TreeNode<int> *root)
{
    if (root->children.size() == 0)
    {
        return 1;
    }

    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += getLeafNodeCount(root->children[i]);
    }

    return ans;
}

int main()
{
    return 0;
}