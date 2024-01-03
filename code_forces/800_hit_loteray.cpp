//https://codeforces.com/problemset/problem/996/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    int ans=0;
    if(n/100 != 0){
        long long hundread = n/100;
        ans+=hundread;
        n=n%100;
    }
    if(n/20 != 0){
        long long twenty = n/20;
        ans+=twenty;
        n=n%20;
    }
    if(n/10 != 0){
        long long ten = n/10;
        ans+=ten;
        n=n%10;
    }
    if(n/5 != 0){
        long long five = n/5;
        ans+=five;
        n=n%5;
    }
    if(n!=0){
        ans+=n;
    }
    cout<<ans<<endl;

    return 0;
}