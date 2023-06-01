#include <iostream>
#include <queue>

using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

BinaryTreeNode<int> *takeInput()
{
    int rootData;

    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
class largestBSTReturn
{
public:
    bool isBST;
    int minimum;
    int maximum;
    int largestBSTheight;
};

largestBSTReturn helper(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        largestBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        output.largestBSTheight = 0;
    }

    largestBSTReturn leftOutput = helper(root->left);
    largestBSTReturn rightOutput = helper(root->right);

    int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));

    bool isBSTFinal = (root->data < rightOutput.minimum) && (root->data > leftOutput.maximum) && leftOutput.isBST && rightOutput.isBST;
    int finalHeight;
    if (isBSTFinal)
    {
        finalHeight = 1 + max(leftOutput.largestBSTheight, rightOutput.largestBSTheight);
    }
    else
    {
        finalHeight = max(leftOutput.largestBSTheight, rightOutput.largestBSTheight);
    }

    largestBSTReturn output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.isBST = isBSTFinal;
    output.largestBSTheight = finalHeight;
    return output;
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    return helper(root).largestBSTheight;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    cout << largestBSTSubtree(root);
    delete root;
}
