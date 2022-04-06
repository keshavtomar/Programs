#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin>>a>>b>>c;
        if(a<c){
            cout<<"1 ";
        }
        else{
            cout<<"-1 ";
        }
        if(a*b > c){
            cout<<b<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}