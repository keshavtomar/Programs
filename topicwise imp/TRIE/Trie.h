#include "TrieNode.h"

class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWord(string word)
    {
        insertWord(root, word);
    }

    void insertWord(TrieNode *root, string word)
    {
        // base case
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // small work

        int index = word[0] - 'a';

        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursion call
        insertWord(child, word.substr(1));
    }

    // SEARCHING

    bool search(string word)
    {
        // Write your code here
        return search(root, word);
    }

    bool search(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            if (root->isTerminal == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        int index = word[0] - 'a';

        if (root->children[index] == NULL)
        {
            return false;
        }
        else
        {
            return search(root->children[index], word.substr(1));
        }
    }

    void removeWord(string word)
    {
        removeWord(root, word);
    }

    void removeWord(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child = root->children[index];

        if (child == NULL)
        {
            // word not found
            return;
        }
        else
        {
            removeWord(child, word.substr(1));

            // remove child if it is useless
            if (child->isTerminal == false)
            {
                for (int i = 0; i < 26; i++)
                {
                    if (child->children[i] != NULL)
                    {
                        return;
                    }
                }
                delete child;
                root->children[index] = NULL;
            }

            return;
        }
    }
};
