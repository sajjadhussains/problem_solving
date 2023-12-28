//p_link:https://codeforces.com/problemset/problem/160/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>coins(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>coins[i];
        sum+=coins[i];
    }
    sort(coins.begin(), coins.end(),greater<int>());
    int greedy_child=(sum/2)+1;
    int greedy_child_needs=0,ans=0;
    for(int i=0;i<n;i++){
       if(greedy_child_needs>=greedy_child){
        break;
       } 
       greedy_child_needs+=coins[i];
       ans++;
    }
    cout<<ans<<endl;
    return 0;

}