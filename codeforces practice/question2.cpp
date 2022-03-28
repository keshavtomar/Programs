#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        char a[10][10];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }

        char x;

        for(int i=0; i<(n-1)/2; i++){
        int f[5];
            for(int j=0; j<m; j++){
                cin>>x;
                int count=0;
                for(int k=0; k<n; k++){
                    if(x==a[k][j]){
                        f[count]=k;
                        count++;
                    }
                }
            }
        }

    }
}