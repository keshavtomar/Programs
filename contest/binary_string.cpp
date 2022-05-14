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
        cin>>st;
        int zero_count=0;
        for(int i=0; i<st.length(); i++){
            if(st[i]==0){
                zero_count++;
            }
        }
        int last =st.length()-1;
        int i=0;
        int one_removed=0;
        while(i<=last){
            if(st[i]=='0'){
                i++;
                zero_count--;
            }
            else if(st[last]=='0'){
                last--;
                zero_count--;
            }
            else{
                if(one_removed=zero_count){
                    break;
                }
                else{
                    
                }
            }
        }
    }
}