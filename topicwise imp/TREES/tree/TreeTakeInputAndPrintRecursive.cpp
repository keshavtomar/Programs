#include <iostream>
#include "treeNode.h"

using namespace std;

TreeNode<int> *takeInput()
{
    int rootdata;
    cout << "Enter data" << endl;
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);

    int n;
    cout << "Enter number of children of " << rootdata << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }

    return root;
}

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " : ";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }

    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
};

int main()
{
    cout << "Enter the tree Input : ";
    TreeNode<int> *root = takeInput();

    printTree(root);
    return 0;
}