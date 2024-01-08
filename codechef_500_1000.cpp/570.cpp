//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n<=x){
            cout<<0<<endl;
        }
        else{
            int req=n-x;
        int ans;
        if(req%4==0){
            ans=req/4;
        }
        else{
            ans=(req/4)+1;
        }
        cout<<ans<<endl;
        }
    }
    return 0;
}