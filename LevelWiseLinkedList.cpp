#include <iostream>
#include <vector>
#include "BinaryTreeNode.h"

using namespace std;



template <typename T>

// Linked list class defined
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

/*
This is a question in which you have to return a vector of heads of linked list, each linked list
is consructed by each level of a binary tree

Approach -> somewhat same approach of printing each level of linked list, in which we maintain currentNodes
in starting current nodes will contain the root node only, then we will push it's childrens of level 2
in nextNodes, and make a linkedList of currentNodes and push it's head in ans to return
After that we will make our currentNodes equal to nextNodes and clear our nextNodes, then we will
work on our new currentNodes
We will keep doing this until currentNodes vector is empty
*/

vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    vector<Node<int> *> ans;
    if (root == NULL)
    {
        return ans;
    }

    vector<BinaryTreeNode<int> *> currentNodes;
    vector<BinaryTreeNode<int> *> nextNodes;
    currentNodes.push_back(root);

    while (currentNodes.size() != 0)
    {
        Node<int> *head = (Node<int> *)currentNodes[0];
        Node<int> *tail = head;
        for (auto cs : currentNodes)
        {
            if (cs->left)
            {
                nextNodes.push_back(cs->left);
            }
            if (cs->right)
            {
                nextNodes.push_back(cs->right);
            }
        }

        for (int i = 1; i < currentNodes.size(); i++)
        {
            tail->next = (Node<int> *)currentNodes[i];
            tail = tail->next;
        }
        tail->next = NULL;

        currentNodes.clear();
        currentNodes = nextNodes;
        nextNodes.clear();

        ans.push_back(head);
    }

    return ans;
}

int main()
{
    return 0;
}