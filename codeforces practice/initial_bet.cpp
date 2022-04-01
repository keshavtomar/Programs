#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;
    float distribution = sum / 5.0;
    int dist = sum / 5;
    if(sum==0){
        cout<<"-1"<<endl;
    }
    else if (dist == distribution)
    {
        cout << dist << endl;
    }
    else
        cout << "-1" << endl;
}