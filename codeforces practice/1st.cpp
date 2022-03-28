#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        char c;
        cin >> c;
        int found = 0;
        for (int i = 0; i < st.length(); i++)
        {
            int before, after;
            if (st[i] == c)
            {
                before = i;
                after = st.length() - i - 1;
                if (before % 2 == 0 && after % 2 == 0){
                    found=1;
                    break;
                }
            }
        }
        if(found==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}