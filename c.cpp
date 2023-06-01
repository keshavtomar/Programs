#include <bits/stdc++.h>

using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
    TrieNode *root;

public:
    int count;

    Trie()
    {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word)
    {
        // Base case
        if (word.size() == 0)
        {
            if (!root->isTerminal)
            {
                root->isTerminal = true;
                return true;
            }
            else
            {
                return false;
            }
        }

        // Small calculation
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

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word)
    {
        if (insertWord(root, word))
        {
            this->count++;
        }
    }

    void helpercomplete(TrieNode *root, string pattern, string temp_list)
    {
        temp_list += root->data;
        // cout<<"we have data as temp- "<<temp_list<<endl;
        if (pattern.size() == 0)
        {
            // temp_list+=root->data;
            if (root->isTerminal)
            {
                cout << temp_list << endl;
            }
            for (int i = 0; i < 26; i++)
            {
                // cout<<"we enetered for loop"<<endl;
                if (root->children[i] != NULL)
                {
                    // cout<<"we found data at- "<< root->children[i]->data<<endl;
                    TrieNode *child = root->children[i];
                    helpercomplete(child, pattern, temp_list);
                    temp_list.pop_back();
                }
            }
            return;
        }

        TrieNode *child;
        int index = pattern[0] - 'a';
        if (root->children[index] != NULL)
        {
            // cout<<"we found - "<< root->children[index]->data<<endl;
            child = root->children[index];
            // temp_list+= child->data;
            // cout<<temp_list<<endl;
        }
        else
        {
            // cout<<"nothing fond a"<<endl;
            return;
        }
        helpercomplete(child, pattern.substr(1), temp_list);
        return;
    }

    void autoComplete(vector<string> input, string pattern)
    {

        for (int i = 0; i < input.size(); i++)
        {
            insertWord(input.at(i));
            // cout<< input.at(i)<<endl;
        }
        string templist;
        helpercomplete(root, pattern, templist);
    }
};