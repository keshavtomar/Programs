#include <iostream>
#include "treeNode.h"

using namespace std;

/*preorder and postorder are two methods of printing or performing on a tree,
 in preorder we first print or perform the root node and then call on it's childrens one by one, to do the same
 in postorder we first call on it's children and when it comes back we print or perform the root


 */

void preorder(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preorder(root->children[i]);
    }
}

void postorder(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        postorder(root->children[i]);
    }
    cout << root->data << " ";
}

int main()
{
    return 0;
}