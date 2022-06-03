#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    string st;
    cin >> st;
    int n = st.length();
    bool presence_of_single_odd = 0;
 
   // after the presence of single odd if total no of letters is odd, than no of odds present in the string should be odd


    for (int i = 0; i < n; i++)
    {
        bool couple_exist = 0;
        for (int j = 0; j < n; j++)
        {
            if (st[i] == st[j] && i != j)
            {
                couple_exist = 1;
                break;
            }
        }
        if (couple_exist == 0)
        {
            presence_of_single_odd = 1;
            break;
        }
    }
    if (!presence_of_single_odd)
    {
        cout << "First" << endl;
        // cout << "This works" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
}