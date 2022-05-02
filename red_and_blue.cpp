#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int a, b;
        cin >> n;
        int maxa = 0, maxb = 0;
        int sum_a = 0, sum_b = 0;

        while (n--)
        {
            cin >> a;
            sum_a += a;
            if (sum_a > maxa)
            {
                maxa = sum_a;
            }
        }
        cin >> m;
        while (m--)
        {
            cin >> b;
            sum_b += b;
            if (sum_b > maxb)
            {
                maxb = sum_b;
            }
        }
        // cout<<"suma = "<<sum_a<<" sumb = "<<sum_b<<endl;
        cout << maxa+maxb << endl;
    }
}