#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        int open_bracket = 0, closed_bracket = 0, question_mark = 0;
        // kisi bhi stage pr close bracket, (open bracket + question mark) se jyada nhi hone chahiye, aur string ki length odd nhi hone chahiye

        if (s.length() % 2 == 1)
        {
            cout << "NO" << endl;
            flag = 1;
            continue;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                open_bracket++;
            }
            else if (s[i] == ')')
            {
                closed_bracket++;
            }
            else if (s[i] == '?')
            {
                question_mark++;
            }

            if (closed_bracket > open_bracket + question_mark)
            {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }

        if (flag == 0)
        {
            open_bracket = 0;
            closed_bracket = 0;
            question_mark = 0;
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] == '(')
                {
                    open_bracket++;
                }
                else if (s[i] == ')')
                {
                    closed_bracket++;
                }
                else if (s[i] == '?')
                {
                    question_mark++;
                }
                if (open_bracket > closed_bracket + question_mark)
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if(flag==0){
           cout<<"YES"<<endl;
        }
    }
}