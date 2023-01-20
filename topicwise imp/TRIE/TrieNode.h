#include <bits/stdc++.h>

using namespace std;

class TrieNode
{
public:
    char Data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char Data)
    {
        this->Data = Data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        // assuming only lowercase letters are present in words and a-> 0 , b-> 1, c->2 and so on
        isTerminal = false;
    }
};