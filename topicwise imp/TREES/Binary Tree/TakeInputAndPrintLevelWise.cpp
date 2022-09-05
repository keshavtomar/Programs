#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"

using namespace std;

/* In this we will take level wise input by maintaining a queue, similar to what we did in generic trees*/

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        int leftData, rightData;
        cout << "Enter Left data of " << front->data << endl;
        cin >> leftData;
        if (leftData != -1)
        {
            BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(leftData);
            front->left = leftChild;
            pendingNodes.push(leftChild);
        }

        cout << "Enter Right data of " << front->data << endl;
        cin >> rightData;
        if (rightData != -1)
        {
            BinaryTreeNode<int> *rightChild = new BinaryTreeNode<int>(rightData);
            front->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }

    return root;
}

void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";

        BinaryTreeNode<int> *leftChild = front->left;
        BinaryTreeNode<int> *rightChild = front->right;
        if (leftChild != NULL)
        {
            cout << "L:" << leftChild->data;
            pendingNodes.push(leftChild);
        }
        if (leftChild && rightChild)
        {
            cout << ",";
        }
        if (rightChild != NULL)
        {
            cout << "R:" << rightChild->data;
            pendingNodes.push(rightChild);
        }
        cout << endl;
    }
}

int numNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + numNodes(root->left) + numNodes(root->right);
}

// 1 2 3 4 -1 -1 2 5 6 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);
    cout << "Number of nodes are : " << numNodes(root);
    return 0;
}