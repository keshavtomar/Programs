#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int total_lines = 2 * n + 1;
    int a[total_lines][total_lines];
    int reset = n;
    for (int i = 0; i < total_lines; i++)
    {
        int start = n;
        bool reverse = 0;
        bool only_once = 0;
        for (int j = 0; j < total_lines; j++)
        {
            a[i][j] = start;
            if (start > 0 && reverse == 0)
            {
                start--;
            }
            else
            {
                start++;
                reverse = 1;
            }
            if (i <= n)
            {
                if (reverse == 0 && j <= i)
                {
                    cout << a[i][j] << " ";
                }
                else if (reverse == 1 && j >= total_lines - i - 1)
                {
                    cout << a[i][j] << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                // cout<<"REset is "<< reset<<" j is "<<j<<endl;
                if (reverse == 0 && j <= reset)
                {
                    cout << a[i][j] << " ";
                }
                else if (reverse == 1 && j >= total_lines - reset - 1)
                {
                    cout << a[i][j] << " ";
                }
                else
                {
                    cout << "  ";
                }
                if (only_once == 0)
                {
                    reset--;
                    only_once = 1;
                }
            }
        }
        cout << endl;
    }
}