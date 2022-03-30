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
        char a[100][100];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j % 2 == 0)
                    {
                        a[i][j] = 'B';
                    }
                    else
                    {
                        a[i][j] = 'W';
                    }
                }
            }
            else
            {
                for (int j = 0; j < m; j++)
                {
                    if (j % 2 == 0)
                    {
                        a[i][j] = 'W';
                    }
                    else
                    {
                        a[i][j] = 'B';
                    }
                }
            }
        }
        if(n*m%2==0){
            a[0][1]='B';
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}