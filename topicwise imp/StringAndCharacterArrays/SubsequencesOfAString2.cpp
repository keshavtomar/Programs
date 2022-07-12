#include <iostream>
#include <climits>
#include <algorithm>

#define FOR(a, b, c) for (int a = b; a < c; a++)

using namespace std;

void printSubsequences(string st, string output)
{
    int len = st.length();
    if (len == 0)
    {
        cout << output<<endl;
        return;
    }

    printSubsequences(st.substr(1),output);
    output+=st[0];
    printSubsequences(st.substr(1),output);
}

int main(void)
{
    string st;
    cin >> st;
    string output = "";
    printSubsequences(st, output);
}