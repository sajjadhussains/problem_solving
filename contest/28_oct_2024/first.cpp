#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int z=min(x,y);
        cout<<0<<" "<<z<<" "<<z<<" "<<0<<endl;
        cout<<0<<" "<<0<<" "<<z<<" "<<z<<endl;
    }
    return 0;
}