#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    bool is_palindrome = true;
    for (int i = 0, j = str.size() - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            is_palindrome = false;
            break;
        }
    }
    if (is_palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}