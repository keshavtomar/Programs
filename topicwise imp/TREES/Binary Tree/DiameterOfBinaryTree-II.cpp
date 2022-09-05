#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

pair<int, int> DiameterAndHeight(BinaryTreeNode<int> *root)
{
    // first of pair is diameter and second of pair is height
    if (root == NULL)
    {
        return {0, 0}; // both will be zero if root is NULL
    }

    pair<int, int> leftAns = DiameterAndHeight(root->left);
    pair<int, int> rightAns = DiameterAndHeight(root->right);

    int myHeight = 1 + max(leftAns.second, rightAns.second);

    pair<int, int> Ans;
    Ans.second = myHeight;

    // calculating diameter
    int option1 = 1 + leftAns.second + rightAns.second;
    int option2 = leftAns.first;
    int option3 = rightAns.first;

    Ans.first = max(option1, max(option2, option3));

    return Ans;
}

int main()
{
    return 0;
}