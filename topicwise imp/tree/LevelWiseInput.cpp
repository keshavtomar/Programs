#include <iostream>
#include <queue>
// #include <TreeTakeInputAndPrintRecursive.cpp>
#include "treeNode.h"

using namespace std;

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root Data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> quu;
    quu.push(root);

    while (!quu.empty())
    {
        TreeNode<int> *temp = quu.front();
        quu.pop();
        cout << "Enter the no of childrens of " << temp->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter the " << i + 1 << "th child of " << temp->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            temp->children.push_back(child);
            quu.push(child);
        }
    }
    return root;
}

void printLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> pending;
    pending.push(root);
    while (!pending.empty())
    {
        TreeNode<int> *front = pending.front();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            if (i == front->children.size() - 1)
            {
                cout << front->children[i]->data;
            }
            else
            {
                cout << front->children[i]->data << ",";
            }
            pending.push(front->children[i]);
        }
        cout << endl;
        pending.pop();
    }
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);
    return 0;
}