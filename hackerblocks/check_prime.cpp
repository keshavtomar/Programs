#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    long long int n;
    cin >> n;
    bool prime = 1;
    if (n % 2 == 0)
    {
        prime = 0;
    }
    else
    {
        for (int i = 3; i <= n / 2; i = i + 2)
        {
            if(n%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime==1){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}