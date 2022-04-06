#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[100000];
    int no_of_zeroes = 0;
    int negative_numbers = 0;
    long long int moves = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            moves += -1 - a[i];
            negative_numbers++;
        }
        else if (a[i] == 0)
        {
            no_of_zeroes++;
        }
        else
        {
            moves += a[i] - 1;
        }
    }
    if(negative_numbers%2==1){
        if(no_of_zeroes>0){
            cout<<moves+no_of_zeroes<<endl;
        }
        else{
            cout<<moves+2<<endl;
        }
    }
    else{
        cout<<moves+no_of_zeroes<<endl;
    }
}