#include <iostream>
#include "BinarySearchTree.h"

/*
In BST we can reduce the time complexity just by deciding in which half to search
*/

using namespace std;

pair<int, int> LCA(BinaryTreeNode<int> *root, int val1, int val2)
{
    if (root == NULL)
    {
        return {-1, -1};
    }

    int me = root->data;
    if (val1 > me && val2 > me)
    {
        // search right
        pair<int, int> rightAns = LCA(root->right, val1, val2);
        return rightAns;
    }
    else if (val1 < me && val2 < me)
    {
        pair<int, int> leftAns = LCA(root->left, val1, val2);
        return leftAns;
    }
    else
    {
        pair<int, int> leftAns = LCA(root->left, val1, val2);
        pair<int, int> rightAns = LCA(root->right, val1, val2);

        if (leftAns.second == 1 && rightAns.second == 1)
        {
            return {me, 2};
        }
        else if (leftAns.second == 1 || rightAns.second == 1)
        {
            if (me == val1 || me == val2)
            {
                return {me, 2};
            }
            else
            {
                if (leftAns.second == 1)
                {
                    return leftAns;
                }
                if (rightAns.second == 1)
                {
                    return rightAns;
                }
            }
        }
        else
        {
            if (me == val1 || me == val2)
            {
                return {me, 1};
            }
            else
            {
                return {-1, -1};
            }
        }
    }
}

int getLCA(BinaryTreeNode<int> *root, int val1, int val2)
{
    pair<int, int> ans = LCA(root, val1, val2);

    if (ans.second == -1)
    {
        return ans.second;
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