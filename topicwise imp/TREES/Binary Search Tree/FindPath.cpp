#include <iostream>
#include <vector>
#include "BinaryTreeNode.h"

using namespace std;

vector<int> *PathFromNodeToRoot(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == x)
    {
        vector<int> *vc = new vector<int>();
        vc->push_back(x);
        return vc;
    }

    if (x > root->data)
    {
        vector<int> *rightAns = PathFromNodeToRoot(root->right, x);
        if (rightAns != NULL)
        {
            rightAns->push_back(root->data);
        }
        return rightAns;
    }
    else if (x < root->data)
    {
        vector<int> *leftAns = PathFromNodeToRoot(root->left, x);
        if (leftAns != NULL)
        {
            leftAns->push_back(root->data);
        }
        return leftAns;
    }
}

int main()
{
    return 0;
}