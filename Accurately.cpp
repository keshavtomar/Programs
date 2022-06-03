#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        int decreasable=0;
        for(int i=0; i<n-1; i++){
            if(st[i]=='1'&&st[i+1]=='0'){
                decreasable=1;
                break;
            }
        }
        if(decreasable==0){
            cout<<st;
        }
        else{
            for(int i=0; i<n; i++){
                if(st[i]=='0'){
                    cout<<'0';
                }
                else{
                    break;
                }
            }
            cout<<'0';
            for(int i=n-1; i>=0; i--){
                if(st[i]=='1'){
                    cout<<'1';
                }
                else{
                    break;
                }
            }
        }
        cout<<endl;
    }
}



// 4 3 2 1 0 1 2 3 4 
//   3 2 1 0 1 2 3
//     2 1 0 1 2
//       1 0 1
//         0 



