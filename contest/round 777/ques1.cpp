#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int no_of_two, no_of_one;
        if (n % 3 == 0)
        {
            no_of_two = n / 3;
            no_of_one = n / 3;
        }
        else if (n % 3 == 1)
        {
            no_of_one = n / 3 + 1;
            no_of_two = n / 3;
        }
        else if (n % 3 == 2)
        {
            no_of_one = n / 3;
            no_of_two = n / 3 + 1;
        }

        int total = no_of_one + no_of_two;
        if (no_of_one == no_of_two || no_of_one < no_of_two)
        {

            for (int i = 0; i < total; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "2";
                }
                else
                {
                    cout << "1";
                }
            }
            cout << endl;
        }
        else if (no_of_one > no_of_two)
        {
            for (int i = 0; i < total; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "2";
                }
            }
            cout<<endl;
        }
    }
}