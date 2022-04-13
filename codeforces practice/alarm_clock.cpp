#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long int sleep_left = a;
        long long int time_passed = 0;
        sleep_left = a - b;
        time_passed = b;

        if (sleep_left < 1)
        {
            cout << time_passed << endl;
        }
        else{
            if(c<=d){
                cout<<"-1"<<endl;
                continue;
            }
            else{
                long long int x = ((sleep_left-1)/(c-d)) + 1;
                time_passed = time_passed + c*x;
                cout<<time_passed<<endl;
            }
        }
    }
}