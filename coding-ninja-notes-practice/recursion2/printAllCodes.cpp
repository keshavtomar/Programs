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

char ConvertToChar(int a)
{
    if (a <= 26)
    {
        return 'a' + a - 1;
    }
    else
    {
        return 0;
    }
}

void getCodes(string input, string temp)
{
    if (input.length() == 0)
    {
        // transfer temp to output
        cout << temp << endl;
        return;
    }

    char x = ConvertToChar(stoi(input.substr(0, 1)));
    if (!x)
    {
        return;
    }
    getCodes(input.substr(1), temp + x);

    if (input.length() >= 2)
    {
        char y = ConvertToChar(stoi(input.substr(0, 2)));
        if (!y)
        {
            return;
        }
        getCodes(input.substr(2), temp + y);
        return;
    }

    return;
}

void printAllPossibleCodes(string input)
{

    string temp;

    getCodes(input, temp);

    return;
}

int main()
{
    string st;
    cin >> st;
    printAllPossibleCodes(st);
    return 0;
}