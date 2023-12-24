
#include<bits/stdc++.h>

using namespace std;
vector<int>dp(10001,INT_MAX);
int main()
{
    int n;
    cin>>n;

    dp[0]=0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=n;j++){
            dp[i]=min(dp[i],dp[i-j*j]+1);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}