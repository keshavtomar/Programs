#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>

#define FOR(a, b, c) for (int a = b; a < c; a++)

using namespace std;

int keypadCode(string st[], int p, string output[])
{
    if (p == 0)
    {
        output[0] = "";
        return 1;
    }

    int previousNumber = keypadCode(st, p / 10, output);

    string temp[10000];

    int curr = 0;
    FOR(i, 0, st[p % 10].length())
    {
        FOR(j, 0, previousNumber)
        {
            temp[curr] = output[j] + st[p % 10][i];
            curr++;
        }
    }

    FOR(i, 0, curr)
    {
        output[i] = temp[i];
    }

    return curr;
}

int main(void)
{
    string st[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int pattern;
    cin >> pattern;
    string *output = new string[1000];
    int count = keypadCode(st, pattern, output);
    FOR(i, 0, count)
    {
        cout << output[i] << endl;
    }
}