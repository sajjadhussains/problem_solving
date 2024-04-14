#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>cnt;
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            cnt[c]++;
        }
        int ans=0;
        int m_ans=0;
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            if(cnt[c]>0){
                ans++;
                cnt[c]--;
            }
            else{
                m_ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

