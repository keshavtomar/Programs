#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

/*
A tree is balanced only if it's left subtree is balanced AND it's right subtreee is balanced
AND abs(leftHeight-rightHeight)<=1
*/

pair<int, bool> HeightAndBalance(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return {0, 1};
    }

    pair<int, bool> leftAns = HeightAndBalance(root->left);
    pair<int, bool> rightAns = HeightAndBalance(root->right);

    pair<int, bool> ans;
    // ans.first is our height to return and ans.second is the bool whether I am balanced or not
    // and I am balanced only if my left is balanced&& my right is balanced&&|leftHeight-rightHeight|<=1

    ans.first = 1 + max(leftAns.first, rightAns.first);

    ans.second = (leftAns.second) && (rightAns.second) && (abs(leftAns.first - rightAns.first) <= 1);

    return ans;
}

bool isBalanced(BinaryTreeNode<int> *root)
{
    return HeightAndBalance(root).second;
}

int main()
{
    return 0;
}