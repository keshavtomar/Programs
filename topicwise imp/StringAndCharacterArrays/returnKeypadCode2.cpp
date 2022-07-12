#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>

#define FOR(a, b, c) for (int a = b; a < c; a++)

using namespace std;

void printKeypad(int num, string output)
{
    if (num == 0 || num == 1)
    {
        cout << output << endl;
    }

    int curr = num % 10;

    string cur;
    if (curr == 2)
    {
        cur = "abc";
    }
    else if (curr == 3)
    {
        cur = "def";
    }
    else if (curr == 4)
    {
        cur = "ghi";
    }
    else if (curr == 5)
    {
        cur = "jkl";
    }
    else if (curr == 6)
    {
        cur = "mno";
    }
    else if (curr == 7)
    {
        cur = "pqrs";
    }
    else if (curr == 8)
    {
        cur = "tuv";
    }
    else if (curr == 9)
    {
        cur = "wxyz";
    }

    for (int i = 0; i < cur.length(); i++)
    {
        printKeypad(num / 10, cur[i]+output);
    }
}

void printKeypad(int num)
{
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output="";
    printKeypad(num, output);
}

int main(void)
{
    int num;
    cin >> num;

    printKeypad(num);
}