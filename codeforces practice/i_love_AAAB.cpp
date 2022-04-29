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
        int no_of_A = 0, no_of_B = 0;
        bool possible = 1;
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == 'A')
            {
                no_of_A++;
            }
            else
            {
                no_of_B++;
            }
            if (no_of_B > no_of_A)
            {
                possible = 0;
                break;
            }
        }
        if(st[st.length()-1]=='A'){
            possible=0;
        }
        if(st.length()<2){
            possible=0;
        }
        if(possible==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}