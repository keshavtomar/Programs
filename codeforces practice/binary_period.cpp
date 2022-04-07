#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        int len = st.length();
        int zeroes = 0, ones = 0;
        for (int i = 0; i < len; i++)
        {
            if (st[i] == '0')
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
        }
        int large;
        // cout<<"zeroes = "<<zeroes<<" ones = "<<ones<<endl;
        if (zeroes * ones == 0)
        {
            cout << st << endl;
            continue;
        }


        char initial=st[0];
        if(initial=='0'){
            while(len--){
                cout<<"01";
            }
        }
        else{
            while(len--){
                cout<<"10";
            }
        }
        cout<<endl;
    }
}