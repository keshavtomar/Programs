#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
       int r_groups = b+1;
       int groups = 2*b+1;
       int big = r%(b+1);
       for (int i = 0; i < b+1; i++)
       {
           for(int j=0; j<r/(b+1); j++){
               cout<<"R";
           }
           if(big){
               cout<<"R";
               big--;
           }
           if(i!=b){
               cout<<"B";
           }
       }
       
       cout<<endl;
    }
}