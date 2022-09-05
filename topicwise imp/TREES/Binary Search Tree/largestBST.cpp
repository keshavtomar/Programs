#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

class Quad
{
public:
    bool isBST;
    int height;
    int minV;
    int maxV;

    Quad(bool a, int b, int c, int d)
    {
        isBST = a;
        height = b;
        minV = c;
        maxV = d;
    }
};

Quad largestBST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        Quad a(NULL, NULL, NULL, NULL);
        return a;
    }

    int me = root->data;

    if (root->left == NULL && root->right == NULL)
    {
        Quad a(1, 1, me, me);
        return a;
    }

    Quad rightAns = largestBST(root->right);
    Quad leftAns = largestBST(root->left);

    if (rightAns.height == NULL)
    {
        if (leftAns.isBST)
        {
            if (me > leftAns.maxV)
            {
                return {1, leftAns.height + 1, leftAns.minV, me};
            }
        }
        else
        {
            return {0, leftAns.height, leftAns.minV, leftAns.maxV};
        }
    }

    if (leftAns.height == NULL)
    {
        if (rightAns.isBST)
        {
            if (me < rightAns.minV)
            {
                return {1, rightAns.height + 1, me, rightAns.maxV};
            }
        }
        else
        {
            return {0, rightAns.height, leftAns.minV, rightAns.maxV};
        }
    }

    if (rightAns.isBST && leftAns.isBST)
    {
        if (me > leftAns.maxV && me < rightAns.minV)
        {
            int heightToreturn = max(leftAns.height, rightAns.height) + 1;
            int minToreturn = leftAns.minV;
            int maxToreturn = rightAns.maxV;

            Quad a(1, heightToreturn, minToreturn, maxToreturn);

            return a;
        }
    }
    else
    {
        Quad a(0, max(leftAns.height, rightAns.height), leftAns.minV, rightAns.minV);
        return a;
    }
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    Quad ans = largestBST(root);
    return ans.height;
}

int main()
{
    return 0;
}
