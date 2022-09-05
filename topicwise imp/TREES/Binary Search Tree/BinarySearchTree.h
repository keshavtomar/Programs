#include <iostream>
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
};

class BST
{
    // Define the data members
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        root = NULL;
    }

    /*----------------- Public Functions of BST -----------------*/

    void remove(int data)
    {
        root = deleteData(data, root);
        return;
    }

    void print()
    {
        print(root);
        return;
    }

    void insert(int data)
    {
        root = insert(data, this->root); // root will change only when it is null
        return;
    }

    bool search(int data)
    {
        return hasData(data, this->root);
    }

private:
    void print(BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            return;
        }

        cout << node->data << ":";
        if (node->left != NULL && node->right != NULL)
        {
            cout << "L:" << node->left->data << ",R:" << node->right->data;
        }
        else if (node->left)
        {
            cout << "L:" << node->left->data;
        }
        else if (node->right)
        {
            cout << "R:" << node->right->data;
        }
        cout << endl;

        print(node->left);
        print(node->right);
    }

    BinaryTreeNode<int> *insert(int x, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            BinaryTreeNode<int> *ans = new BinaryTreeNode<int>(x);
            return ans;
        }

        if (x > node->data) // it will be inserted to right of node
        {
            BinaryTreeNode<int> *rightAns = insert(x, node->right);
            node->right = rightAns;
            return node;
        }
        else
        { // it will be inserted to left of node

            // if the nodedata is equal to x than also it will be inserted to left it means tree can contain duplicates
            BinaryTreeNode<int> *leftAns = insert(x, node->left);
            node->left = leftAns;
            return node;
        }
    }

    BinaryTreeNode<int> *deleteData(int x, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            return NULL;
        }

        if (x > node->data)
        {
            node->right = deleteData(x, node->right);
            return node;
        }
        else if (x < node->data)
        {
            node->left = deleteData(x, node->left);
            return node;
        }
        else // if node-> data is to be deleted
        {
            if (node->right == NULL)
            {
                return node->left;
            }
            else if (node->left == NULL)
            {
                return node->right;
            }
            else
            {
                BinaryTreeNode<int> *minRight = getMinimum(node->right);
                node->data = minRight->data;

                BinaryTreeNode<int> *rightAns = deleteData(minRight->data, node->right);

                node->right = rightAns;
                return node;
            }
        }
    }

    BinaryTreeNode<int> *getMinimum(BinaryTreeNode<int> *node)
    {
        if (node->left == NULL)
        {
            return node;
        }

        return getMinimum(node->left);
    }

    bool hasData(int x, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            return false;
        }

        if (node->data == x)
        {
            return true;
        }
        else if (node->data > x)
        {
            return hasData(x, node->left);
        }
        else
        {
            return hasData(x, node->right);
        }
    }
};

int main()
{
    BST *tree = new BST();
    int choice, input, q;
    cin >> q;
    while (q--)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> input;
            tree->insert(input);
            break;
        case 2:
            cin >> input;
            tree->remove(input);
            break;
        case 3:
            cin >> input;
            cout << ((tree->search(input)) ? "true\n" : "false\n");
            break;
        default:
            tree->print();
            break;
        }
    }
}