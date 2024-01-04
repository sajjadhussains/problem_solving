//https://codeforces.com/problemset/problem/732/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int ans=1,i=1,total=k;
    while(true){
        if(total%10==0 || total%10==r){
            break;
        }
        i++;
        total=k*i;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}