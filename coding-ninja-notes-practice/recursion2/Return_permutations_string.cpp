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

int helper(string input, string output[], string temp, int oid)
{
    int len = input.length();

    if (input[0] == '\0')
    {
        output[oid] = temp;

        oid++;
        return oid;
    }

    int i = 0;
    int n = oid;

    while (input[i] != '\0')
    {
        n = helper(input.substr(0, i) + input.substr(i + 1), output, temp + input[i], n);
        i++;
    }
    return n;
}

int returnPermutations(string input, string output[])
{

    string temp;
    int oid = 0;
    int len = input.length();
    int x = helper(input, output, temp, oid);
    return x;
}

int main()
{
    string st;
    cin >> st;
    string output[100];

    int n = returnPermutations(st, output);
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}