#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka = 0, chris = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            mishka++;
        }
        else if (a < b)
        {
            chris++;
        }
        else
        {
            continue;
        }
    }
    if (mishka > chris)
    {
        cout << "Mishka" << endl;
    }
    else if (mishka < chris)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}