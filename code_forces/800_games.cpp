//https://codeforces.com/problemset/problem/268/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>team;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        team.push_back({a,b});
    }
    int ans=0;
    for(int i=0;i<team.size();i++){
        for(int j=i+1;j<team.size();j++){
                if(team[i].first==team[j].second){
                    ans++;
                }
                if(team[i].second==team[j].first){
                    ans++;
                }
        }
    }
    cout<<ans<<endl;
    return 0;
}