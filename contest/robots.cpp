#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[6][6];
        int min_top;
        int min_left;
        bool possible=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        //setting min moves to left and min moves to top
        for(int i = 0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='R'){
                    min_top=i;
                    goto left;
                }
            }
        }
        left:
        for (int j = 0; j<m; j++)
        {
            for(int i=0; i<n; i++){
                if(a[i][j]=='R'){
                    min_left=j;
                    goto end;
                }
            }
        }
        end:
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='R'&&min_left>=j&&min_top>=i){
                    possible=1;
                    goto finish;
                }
            }
        }
        finish:
        if(possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}