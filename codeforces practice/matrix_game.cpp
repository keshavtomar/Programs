#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[50][50];
        int rows_clear=n, columns_clear=m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==1){
                    rows_clear--;
                    break;
                }
            }
        }
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(a[i][j]==1){
                    columns_clear--;
                     break;
                }
            }
        }
        // cout<<"columns_clear="<<columns_clear<<" rows_clear= "<<rows_clear<<endl;
        int available_moves;
        if(rows_clear<columns_clear){
            available_moves=rows_clear;
        }
        else{
            available_moves=columns_clear;
        }
        if(available_moves%2==0){
            cout<<"Vivek"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }
    }
}