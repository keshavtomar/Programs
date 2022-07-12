#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

void helper(string input, string temp)
{
    int len = input.length();

    if (input[0] == '\0')
    {
        cout << temp << endl;
        return;
    }

    int i = 0;

    while (input[i] != '\0')
    {
        helper(input.substr(0, i) + input.substr(i + 1), temp + input[i]);
        i++;
    }
    return;
}

void printPermutations(string input)
{

    string temp;
    helper(input, temp);
    return ;
}

int main()
{
    string st;
    cin >> st;
    printPermutations(st);
}