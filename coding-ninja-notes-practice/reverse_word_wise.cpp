#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void reverseStringWordWise(char st[])
{
    int len = 0;
    while (st[len] != '\0')
    {
        len++;
    }

    // cout << len;

    char temp[100];
    int t = 0;
    int i = len - 1;
    int j;
    while (i >= 0)
    {
        if (st[i] == ' ')
        {
            j = i + 1;
            while (st[j] != ' ' && st[j] != '\0')
            {
                temp[t] = st[j];
                t++;
                j++;
            }
            temp[t] = ' ';
            t++;
        }
        // cout << i;
        i--;
    }

    j = 0;
    while (st[j] != '\0' && st[j] != ' ')
    {
        temp[t] = st[j];
        j++;
        t++;
    }
    temp[t] = '\0';
    t++;

    for (int i = 0; i < t; i++)
    {
        st[i] = temp[i];
    }
}

int main(void)
{
    char st[100];
    cin.getline(st, 100);

    reverseStringWordWise(st);
    cout << st;
}