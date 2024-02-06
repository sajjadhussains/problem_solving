// https://codeforces.com/problemset/problem/158/B
#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
bool arr2[N];
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ones = 0, twos = 0, threes = 0, fours = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ones++;
        }
        else if (arr[i] == 2)
        {
            twos++;
        }
        else if (arr[i] == 3)
        {
            threes++;
        }
        else
        {
            fours++;
        }
    }
    // cout<<ones<<endl;
    int ans = 0;
    ans += fours;
    if (threes != 0)
    {
        if (threes >= ones)
        {
            ans += threes;
            ones = 0;
        }
        else if (threes!=0 && threes < ones)
        {
            ans += threes;
            ones -= threes;
        }
    }
    if (twos != 0)
    {
        ans += (twos / 2);
        twos = twos % 2;
        if (twos >= ones)
        {
            ans += twos;
            ones = 0;
        }
        else if (twos!=0 && twos < ones)
        {
            ans += twos;
            ones -= 2;
        }
    }
    if (ones != 0)
    {
        if (ones % 4 == 0)
        {
            ans += (ones / 4);
        }
        else
        {
            ans = ans + (ones / 4) + 1;
        }
    }
    cout << ans << endl;
    return 0;
}