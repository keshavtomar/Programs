#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

#include <climits>
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
        Quad a(1, 0, INT_MAX, INT_MIN);
        return a;
    }

    int me = root->data;

    Quad rightAns = largestBST(root->right);
    Quad leftAns = largestBST(root->left);

    if (rightAns.isBST && leftAns.isBST && me > leftAns.maxV && me < rightAns.minV)
    {
        int heightToreturn = max(leftAns.height, rightAns.height) + 1;
        int minToreturn = min(rightAns.minV, min(leftAns.minV, me));
        int maxToreturn = max(rightAns.maxV, max(leftAns.maxV, me));

        Quad a(1, heightToreturn, minToreturn, maxToreturn);

        return a;
    }
    else
    {
        Quad a(0, max(leftAns.height, rightAns.height), min(rightAns.minV, min(leftAns.minV, me)), max(rightAns.maxV, max(leftAns.maxV, me)));
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