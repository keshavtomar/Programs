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