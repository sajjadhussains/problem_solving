//problem-link:

#include<bits/stdc++.h>

using namespace std;
vector<int>dp(10001,-1);
int solve(int n)
{
    if(n==0){
        return 0;
    }
    
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans=INT_MAX;
    for(int i=1;i*i<=n;i++){
        ans=min(1+solve(n-i*i),ans);
    }
    dp[n]=ans;
    return ans;

}
int main()
{
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}