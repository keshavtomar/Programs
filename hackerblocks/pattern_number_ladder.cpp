#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
            count++;
            if(j!=i){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}