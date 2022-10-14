#include <iostream>
#include <vector>
#include "BinaryTreeNode.h"

using namespace std;

/*
In this question we have to find and return the longest path of any leaf to root
*/

vector<int> *longestPath(BinaryTreeNode<int> *root)
{
    // Write your code here
    if (root == NULL)
    {
        vector<int> *toreturn = new vector<int>(0);
        return toreturn;
    }

    vector<int> *leftAns = longestPath(root->left);
    vector<int> *rightAns = longestPath(root->right);

    if (leftAns->size() > rightAns->size())
    {
        leftAns->push_back(root->data);
        return leftAns;
    }
    else
    {
        rightAns->push_back(root->data);
        return rightAns;
    }
}

int main()
{
    return 0;
}