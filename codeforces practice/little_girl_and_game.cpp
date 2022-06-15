#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    string st;
    cin >> st;

    for (int i = 0; i < st.length(); i++)
    {
        for (int j = 0; j < st.length() - i - 1; j++)
        {
            if (st[j] > st[j + 1])
            {
                char temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
    

// cout<<st;
    int no_of_odds=0;
    int cur_letter=1;
    for(int i=0; i<st.length();i++){
        if(st[i]==st[i+1]){
            cur_letter++;
        }
        else{
            if(cur_letter%2==1){
                 no_of_odds++;
                //  cout<<i<<endl;
            }
            cur_letter=1;
        }
    }

    // cout<<no_of_odds<<endl;

    if(no_of_odds==0||no_of_odds==1){
        cout<<"First"<<endl;
    }
    else if(no_of_odds%2==0){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
}