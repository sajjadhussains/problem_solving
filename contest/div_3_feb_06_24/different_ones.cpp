#include <iostream>
#include <unordered_map>

using namespace std;
void solve(){
     int n, m, k;
        cin >> n >> m >> k;

        // Using unordered_maps to store element counts
        unordered_map<int, int> mp1, mp2;

        // Input elements and count occurrences
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp1[a]++;
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            mp2[a]++;
        }
        for(auto it:mp1){
            cout<<it.first<<"->"<<it.second<<endl;;
        }
        cout<<endl;

        int flag = 0;
        int c1 = 0, c2 = 0;
        for (int i = 1; i <= k; i++)
        {
            flag = 0;
            if (mp1[i])
            {
                flag = 1;
                c1++;
            }
            if (mp2[i])
            {
                flag = 1;
                c2++;
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
            if (c1 >= k / 2 && c2 >= k / 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       solve();
    }

    return 0;
}
