#include <iostream>
#include "treeNode.h"

using namespace std;

int numNodes(TreeNode<int> *data)
{
    if (data == NULL) // not the base condition, it just runs when initial root node is given null(only can be encountered in silly questions made by fools)
    {
        return 0;
    }
    int ans = 1;
    for (int i = 0; i < data->children.size(); i++)
    {
        ans += numNodes(data->children[i]);
    }

    return ans;
}

int sumOfNodes(TreeNode<int> *root)
{
    int ans = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += sumOfNodes(root->children[i]);
    }
    return ans;
}

int main()
{
    return 0;
}