#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(k*l)/nl;
    int b=c*d;
    int e=p/np;
    int ans=min({a,b,e})/n;
    cout<<ans<<endl;

    return 0;
}