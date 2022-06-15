#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main(void)
{
    lli x, y, n;
    cin >> x >> y;
    cin >> n;
    lli ans;
    int third = y - x;
    switch (n % 6)
    {
    case 1:
        ans = x;
        break;
    case 2:
        ans = y;
        break;
    case 3:
        ans = y - x;
        break;
    case 4:
        ans = -x;
        break;
    case 5:
        ans = -y;
        break;
    case 0:
        ans = x - y;
        break;

    default:
        break;
    }

    while (ans < 0)
    {
        ans = ans + 1000000007;
    }
    cout << ans % 1000000007;
}

//  x;                                                 //1
//  y;                                                 //2
// a=y-x;                                              //3
// b=a-y;                   //-x                       //4
// c=b-a;                   //-y                       //5
// d=c-b;                   //x-y                      //6
// e=d-c;                   //x
// f=e-d;                   //y
// //