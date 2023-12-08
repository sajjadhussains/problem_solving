// problem_link:https://www.hackerrank.com/contests/projecteuler/challenges/euler004/problem?isFullScreen=true
#include <bits/stdc++.h>

using namespace std;
bool is_palindrome(int n)
{
    int c = n;
    int p_num = 0;
    while (n != 0)
    {
        int a = n / 10;
        int b = n % 10;
        p_num = p_num * 10 + b;
        n = a;
    }
    if (c == p_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int z = 1; z <= t; z++)
    {
        int n;
        cin >> n;
        int largest = 0;
        for (int i = 100; i <= 999; i++)
        {
            for (int j = 999; j >= 100; j--)
            {
                int mul = i * j;
                if (is_palindrome(mul) && largest < mul && mul < n)
                {
                    largest = mul;
                }
            }
        }
        cout << largest << endl;
    }
    return 0;
}