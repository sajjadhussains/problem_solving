//https://codeforces.com/problemset/problem/750/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ans=0,time_needs=0;
    for(int i=1;i<=n;i++){
        time_needs+=5*i;
        if(240-time_needs<k){
            break;
        }
        else{
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}