#include <iostream>
#include <vector>
#include <queue>
#include "BinaryTreeNode.h"

using namespace std;
/*
In this question we have to print kth node from a node in all directions
Order of printed nodes doesn't matter
*/

vector<pair<BinaryTreeNode<int> *, char>> path;

bool FindPath(BinaryTreeNode<int> *root, int node)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == node)
    {
        path.push_back({root, NULL});
        return true;
    }

    bool leftAns = FindPath(root->left, node);
    bool rightAns = FindPath(root->right, node);

    if (leftAns)
    {
        path.push_back({root, 'L'});
    }
    else if (rightAns)
    {
        path.push_back({root, 'R'});
    }

    if (leftAns || rightAns)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void PrintKth(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << endl;
        return;
    }

    if (root->left)
        PrintKth(root->left, k - 1);
    if (root->right)
        PrintKth(root->right, k - 1);

    return;
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k)
{
    FindPath(root, node);

    // till here it has already filled the path vector

    for (int i = 0; i < path.size(); i++)
    {
        if (path[i].second == NULL)
        {
            PrintKth(path[i].first, k - i);
        }
        else if (path[i].second == 'L')
        {
            if (k - i == 0)
            {
                cout << path[i].first->data << endl;
            }
            PrintKth(path[i].first->right, k - i - 1);
        }
        else
        {
            if (k - i == 0)
            {
                cout << path[i].first->data << endl;
            }
            PrintKth(path[i].first->left, k - i - 1);
        }
    }
}

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

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    int targetNode, k;
    cin >> targetNode >> k;
    nodesAtDistanceK(root, targetNode, k);

    return 0;
}

/*
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
3 3
*/
