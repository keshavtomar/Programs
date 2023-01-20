#include <iostream>
#include "Trie.h"

using namespace std;

int main()
{
    Trie mytrie;
    cout << "press 1 to insert a string, 2 to search a string, 3 to delete a string and 0 to end" << endl;
    int n;
    cin >> n;
    string temp;
    while (n)
    {
        if (n == 1)
        {
            cin >> temp;
            mytrie.insertWord(temp);
            cout << "Inserted Successfully !" << endl;
        }
        else if (n == 2 || n == 3)
        {
            cin >> temp;
            bool find = mytrie.search(temp);
            if (find)
            {
                if (n == 2)
                {
                    cout << "found" << endl;
                }
                else
                {
                    mytrie.removeWord(temp);
                    cout << "Deleted Successfully !" << endl;
                }
            }
            else
            {
                cout << " Not found" << endl;
            }
        }
        cin >> n;
    }
    // function to transform the whole string into lowercase(if any character are uppercased)
    return 0;
}