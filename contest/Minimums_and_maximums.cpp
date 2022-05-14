#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(c<=b&&c>=a){
            cout<<c<<endl;
            continue;
        }
        else if(a<=d&&a>=c){
            cout<<a<<endl;
            continue;
        }
        else{
            cout<<a+c<<endl;
        }
    }
}