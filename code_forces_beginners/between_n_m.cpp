#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        int n, m;
        cin >> n >> m;
        if(n<=0 || m<=0){
            break;
        }
        int minimum = min(n, m);
        int maximum = max(n, m);
        int sum = 0;
        for (int i = minimum; i <= maximum; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}