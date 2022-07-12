#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>

using namespace std;

#include <cstring>

bool checkPalindrome(char input[])
{
    // Write your code here
    int len = strlen(input);
    if (len <= 1)
    {
        return true;
    }

    if (input[0] != input[len - 1])
    {
        return false;
    }
    else
    {
        input[len - 1] = '\0';
        bool lesserInput = checkPalindrome(input + 1);
        if (lesserInput == false)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main(void)
{
    // check if a string is palindrome, using recurssion
    char c[40];
    cin >> c;
    if (checkPalindrome(c))
    {
        cout << "Yes given string is a palindrome";
    }
    else
    {
        cout << "No given string is not a palindrome";
    }
}